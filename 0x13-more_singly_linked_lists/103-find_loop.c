#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: pointer to the first node
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */


listint_t *find_listint_loop(listint_t *head)
{
	if ((head == NULL) || (head->next == NULL))
		return (0);
	if (head)
	{
		listint_t *slow = head, *fast = head;

		while ((fast != NULL) && (fast->next != NULL))
		{
			slow = slow->next;
			fast = fast->next->next;

			if (slow == fast)
			{
				slow = head;
				while (slow != fast)
				{
					slow = slow->next;
					fast = fast->next;
				}
				return (slow);
			}
		}

		return (NULL);
	}
	return (0);
}
