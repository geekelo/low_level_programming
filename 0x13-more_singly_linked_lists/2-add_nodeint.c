#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the start of a list
 * @head: pointer pointing to the first node on the list
 * @n: the int value for the newnode created
 * Return: the memory address of the link list
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

