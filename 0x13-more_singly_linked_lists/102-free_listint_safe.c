#include "lists.h"

/**
 * free_listint_safe - frees a loop or lnear link list
 * @h: pointer to the first node
 * Return: total nodes on the list
 */


size_t free_listint_safe(listint_t **h)
{
	if (((*h) == NULL) || ((*h)->next == NULL))
		return (0);
	if (*h)
	{
		listint_t *slow, *fast;

		slow = *h;
		fast = *h;

		while ((fast != NULL) && (fast->next != NULL))
		{
			slow = slow->next;
			fast = fast->next->next;

			if (slow == fast)
				break;
		}

		return (floo(h, slow, fast));
	}
	return (0);
}

/**
 * floo - complimentary function to free a loop or linear link list
 * @h: pointer to the first node
 * @slow: pointer to count nodes
 * @fast: pointer to count nodes
 * Return: total nodes on the list
 */

size_t floo(listint_t **h, listint_t *slow, listint_t *fast)
{
	size_t count, i;
	listint_t *temp;

	if (slow ==  fast)
	{
		count = 1;

		while (slow->next != fast)
		{
			slow = slow->next;
			count++;
		}
		slow = *h;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
			count++;
		}

		for (i = 0; i < count; i++)
		{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		}
		h = NULL;
		return (count);
	}
	count = 0;
	temp = *h;
	while (*h)
	{
	*h = (*h)->next;
	free(temp);
	temp = *h;
	count++;
	}
	h = NULL;
	return (count);
}

