#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the decimal number passed in
 * @index: the position on n base 2 format to change to 1
 * Return: -1 if not possible and 1 if possible
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(*n) * 8))
		return (-1);

	if (!((*n >> index) & 1))
		*n = *n + (1 << index);
	return (1);
}

