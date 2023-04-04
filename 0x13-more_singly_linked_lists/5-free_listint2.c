#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer to the first node on a list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
	{
		return;
	}
	if (head)
	{
		temp = *head;
		*head = NULL;
		free_listint(temp);
	}
}

/**
 * free_listint - frees all the node in a list.
 * @head: pointer to a list.
 */

void free_listint(listint_t *head)
{

	if (!head)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}

