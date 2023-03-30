#include "lists.h"

/**
 * print_list - counts and prints the str members of each node on
 * the link list. Counts and returns the total number of nodes
 * @h: the first node on the link list
 *
 * Return: the total number of nodes on the link list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	int len = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
		len = strlen(h->str);
		printf("[%d] %s\n", len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}

