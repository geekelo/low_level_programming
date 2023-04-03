#include "lists.h"

/**
 * free_listint - frees a link list
 * @head: pointer to the first node on the link list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;


	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

