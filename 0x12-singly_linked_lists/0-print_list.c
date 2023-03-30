#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - 
 *
 *
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

