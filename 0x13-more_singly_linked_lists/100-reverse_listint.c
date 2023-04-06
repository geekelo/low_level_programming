#include "lists.h"

/**
 * reverse_listint - a function that reverses a linklist
 * @head: the pointer pointing to the first node of the list
 * Return: retuns 0 on successful`
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	next = *head;


	while (next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

