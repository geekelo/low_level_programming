#include "lists.h"

/**
 *
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
		listint_t *newnode, *temp;

		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
		newnode->n = n;
		temp = *head;
		*head = newnode;
		newnode->next = temp;

	return (*head);
}

