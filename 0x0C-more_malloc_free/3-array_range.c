#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: param
 * @max: param
 * Return: an array
 */

int *array_range(int min, int max)
{
	int index, size = 0;
	int *arr = NULL;

	if (min > max)
		return (NULL);
	size = max - min;

	arr = malloc((1 + size) * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (index = 0; index <= size; index++)
	{
		arr[index] = min;
		min++;
	}
	return (arr);
}
