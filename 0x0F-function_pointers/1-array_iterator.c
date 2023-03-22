#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array.
 * @array: array of integers to print
 * @size: size of the array (length)
 * @action: a function pointer to another function meant to
 * print each item on the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if ((array != NULL) && ((*action) != NULL))
		for (index = 0; index < size; index++)
			action(array[index]);


}

