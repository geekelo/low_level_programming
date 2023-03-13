#include "main.h"
#include <stdlib.h>

/**
 * _strdup - makes a copy of a string
 * @str: param
 * Return: the new string
 */

char *_strdup(char *str)
{
	char *ptr = NULL;
	int i = 0;
	int j;

	if (str == NULL)
		return (NULL);
	while (str[i] >= '\0')
		i++;

	ptr = (char *) malloc(i * sizeof(char));

	for (j = 0; j < i; j++)
		*(ptr + j) = *(str + j);

	*(ptr + (i - 1)) = '\0';
	return (ptr);
}
