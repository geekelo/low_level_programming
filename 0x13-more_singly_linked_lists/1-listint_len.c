#include "lists.h"

/**
 * listint_len - counts all the nodes in a link list
 * @h: the first node on the link list
 * Return: the total number of nodes on the link list
 */

size_t listint_len(const listint_t *h)
{

	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);

}

