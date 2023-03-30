#include "lists.h"

/**
 *
 *
 *
 */


void free_list(list_t *head)
{
	list_t *set;
	
	while (head)
	{
		set = head;
		head = head->next;
		free(set->str);
		free(set); 
	}
	free(head);
}

