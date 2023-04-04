#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a newnode
 * at a given position idx
 * @head: pointer to the first node on the list
 * @idx: the position to insert the new node
 * @n: the int value to be contained in the newnode
 * Return: the address to the list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int count = 0;
	if ((*head) && (idx) && (n))
	{
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	tmp = *head;
	while (count < idx)
	{
		tmp = tmp->next;
		if (tmp == NULL && count < idx)
		{
			return (NULL);
		}
	}
	newnode->next = tmp->next;
	tmp = newnode;
	return (*head);
	}
	return (0);
}

