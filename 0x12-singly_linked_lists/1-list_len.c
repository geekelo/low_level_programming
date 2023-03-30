#include "lists.h"

/**
 * list_len - prints the number of nodes on the lonk list
 * @h: the first node of the link list
 * Return: the total number count
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

