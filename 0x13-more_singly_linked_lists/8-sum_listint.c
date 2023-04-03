#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: the pointer to the first node on the list
 * Return:  returns the sum of all the data (n) of a
 * listint_t linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;

	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;

	}

	return (sum);
}

