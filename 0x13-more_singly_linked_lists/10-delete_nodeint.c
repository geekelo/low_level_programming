#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to the first node on the list
 * @index: given position
 * Return: 1 on success and -1 if unsuccessful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if ((*head) && (index))
	{
		listint_t *tmp, *set;
		unsigned int count = 1, len = 1;

		tmp = *head;

		while (tmp)
		{
			tmp = tmp->next;
			len++;
		}

		if (index > len)
			return (-1);
		tmp = *head;
		if (index == 0)
		{
			set = tmp;
			tmp = tmp->next;
		}
		while (count < index)
		{
			tmp = tmp->next;
			count++;
		}
		set = tmp->next;
		tmp->next = set->next;
		free(set);
		return (1);
	}
	return (-1);
}

