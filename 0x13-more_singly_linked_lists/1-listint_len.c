#include "lists.h"

/**
 *
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	listint_t *temp;
	if (h)
	{
	temp = h->next;
	count++;
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	count++;
	}
	return (count);
}

