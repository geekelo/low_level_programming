#include "lists.h"


/**
 * pop_listint - deletes the first node on the list
 * and returns the value contained in the first node
 * @head: pointer to the first node
 * Return: the value in the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head)
	{
	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);
	}
	return (n);
}

