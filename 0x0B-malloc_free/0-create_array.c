#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: param
 * @c: param
 * Return: an array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (0);
	}
	ptr = (char *) malloc(size * sizeof(c));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);




}
