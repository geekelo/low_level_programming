#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list
 * @head: a pointer to the memory address contained in the already
 * existing head node on the link list
 * @str: the str data to be assigned, or passed into the new node
 * Return: the address contained in the head after addind a new
 * node to the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *newnode = NULL;

	tmp = *head;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	*head = newnode;
	newnode->next = tmp;
	return (*head);
}

