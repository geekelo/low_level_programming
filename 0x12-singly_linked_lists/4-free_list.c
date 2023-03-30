#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: the first node on the link list
 *
 */


void free_list(list_t *head)
{
	list_t *set;

	while (head)
	{
		set = head;
		head = set->next;
		free(set->str);
		free(set);
	}
	free(head);
}

