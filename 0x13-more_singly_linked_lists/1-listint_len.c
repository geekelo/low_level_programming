#include "lists.h"

/**
 * listint_len - counts all the nodes in a link list
 * @h: the first node on the link list
 * Return: the total number of nodes on the link list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	listint_t *temp;

	if (h)
	{
		count++;
		temp = h->next;

		while (temp)
		{
			count++;
			temp = temp->next;
		}
		return (count);
	}
	return (0);
}

