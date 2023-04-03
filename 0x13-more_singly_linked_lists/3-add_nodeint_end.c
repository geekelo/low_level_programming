#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new
 * node at the end of a listint_t list.
 * @head: the first node on the link list
 * @n: the integer value to be contained in the
 * newly created node
 * Return: the address of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;
	
	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}

	return (*head);
}

