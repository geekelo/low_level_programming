#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list
 * @h: the head node of the link list
 * Return: total number of nodes on the link list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *temp;

	if (h)
	{
	temp = h->next;
	count++;
	printf("%d\n", h->n);
	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;

	}
	count++;
	}

	return (count);
}

