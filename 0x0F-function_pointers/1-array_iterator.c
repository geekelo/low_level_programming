#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if((array != NULL) && ((*action) != NULL))
		for (index = 0; index < size; index++)
			action(array[index]);


}

