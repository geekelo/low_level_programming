#include "lists.h"

/**
 *
 *
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

		print_loop(head, slow, fast);
	}
	return (0);
}

void print_loop(const listint_t *head, const listint_t *slow, const listint_t *fast)
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

