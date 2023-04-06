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
unsigned int len = 0;
	listint_t *tmp = *head, *new_node;

	while (tmp)
	{
		tmp = tmp->next;
		len += 1;
	}
	if (idx > len)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		unsigned int i = 1;

		tmp = *head;

		for (; i < idx; i++)
			tmp = tmp->next;

		new_node->next = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}

