
#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer to the first node on a list
 */

void free_listint2(listint_t **head)
{
	if (*head)
	{
	listint_t *temp, *set;

	temp = *head;

	
	while (temp)
	{
		set = temp;
		temp = temp->next;
		free(set);
	}
	free(temp);
	*head = NULL;

	}
	return;
}

