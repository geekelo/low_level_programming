#include "function_pointers.h"

/**
 * int_index - returns the index of the first occurence
 * of a value, if the value is present in the array
 * @array: array of integers to search through
 * @size: size of the array
 * @cmp: pointer to a function that does the comparism
 * Return: -1 if value wasn't found or the index of the value
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int index;

	if (size <= 0)
		return (-1);
	if ((array != NULL) || ((*cmp) != NULL))
	{
	for (index = 0; index < size; index++)
	{
		if ((cmp(array[index])) > 0)
			return (index);
	}
	}
	return (-1);
}

