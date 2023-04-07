#include "lists.h"

/**
 * print_listint_safe - prints a link list
 * @head: pointer to the first node on the list
 * Return: 0 on success
 */

size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL || head->next == NULL)
		return (0);
	if (head)
	{
		const listint_t *slow, *fast;

		fast = head;
		slow = head;
		while ((fast != NULL) && (fast->next != NULL))
		{
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
				break;
		}

		return (loo(head, slow, fast));

	}

	return (0);
}

/**
 * loo - finction tat checks for loop in link list
 * and prints element of the link list
 * @head: pointer to the first node
 * @slow: slow paced pointer to check for loop in list
 * @fast: fast paced pointer to check for loop in list
 * Return: the number of elements
 */

size_t loo(const listint_t *head, const listint_t *slow, const listint_t *fast)
{
	const listint_t *temp;
	size_t count = 1, i = 0;

	temp = head;
	if (slow == fast)
	{

		while (slow->next != fast)
		{
			slow = slow->next;
			count++;
		}
		slow = head;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
			count++;
		}

		for (i = 0; i < count; i++)
		{
			printf("[%p] %i\n", (void *)temp, temp->n);
			temp = temp->next;
		}
		printf("-> [%p] %i\n", (void *)temp, temp->n);
	
	}
	else
	{
		while (temp)
		{
			printf("[%p] %i\n", (void *)temp, temp->n);
			temp = temp->next;
			count++;
		}
	}

	return (count);
}

