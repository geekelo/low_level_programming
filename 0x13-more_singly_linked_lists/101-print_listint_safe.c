#include "lists.h"

/**
 * print_listint_safe - prints a link list
 * @head: pointer to the first node on the list
 * Return: 0 on success
 */

size_t print_listint_safe(const listint_t *head)
{
	if (head)
	{
		const listint_t *slow, *fast;

		fast = head;
		slow = head;
		while (fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
				break;
		}

		ploop(head, slow, fast);
	
	}

	return (0);
}

/**
 * ploop - finction tat checks for loop in link list
 * and prints element of the link list
 * @head: pointer to the first node
 * @slow: slow paced pointer to check for loop in list
 * @fast: fast paced pointer to check for loop in list
 */

void ploop(const listint_t *head, const listint_t *slow, const listint_t *fast)
{
	const listint_t *temp;

	temp = head;
	if (slow == fast)
	{
		int count = 1, i = 0;

		while (slow->next != fast)
		{
			slow = slow->next;
			count++;
		}
		slow = head;
		while (slow != fast)
		{
			slow = slow->next;
			count++;
		}

		for (i = 0; i < count; i++)
		{
			printf("[%p] %i", (void *)temp, temp->n);
			temp = temp->next;
		}
	}
	while (temp)
	{
	printf("[%p] %i", (void *)temp, temp->n);
	temp = temp->next;
	}
}

