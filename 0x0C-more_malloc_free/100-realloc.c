#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: param
 * @old-size: param
 * @new-size: param
 * Return: a pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL || new_size > old_size)
		ptr = malloc(new_size);

	ptr = malloc(new_size);
	return (ptr);
}
