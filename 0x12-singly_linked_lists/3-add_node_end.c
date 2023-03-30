#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the head or first node on the link list
 * @str: string data that needs to be assigned to the newnode
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = NULL;
	list_t *newnode = NULL;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newnode;

	return (*head);
}

