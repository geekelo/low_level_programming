
#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer to the first node on a list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head)
	{
	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;

	}

	return;
}

