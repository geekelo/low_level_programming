#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a given
 * position on a list
 * @head: the pointer pointing to the first node on the list
 * @index: given position of the node to be returned
 * Return: the node at position index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head)
	{
	unsigned int count = 1;
	listint_t *tmp;

	tmp = head;
	while (count < index)
	{
		count++;
		tmp = tmp->next;
		if ((tmp == NULL) && (count != index))
			return (NULL);
		}

	return (tmp);
	}
	return (0);
}

