#include "main.h"
#include <stdlib.h>

/**
 * _calloc - mimic calloc function
 * @nmemb: param
 * @size: param
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr = NULL;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;

	arr = (void *)arr;
	return (arr);
}

