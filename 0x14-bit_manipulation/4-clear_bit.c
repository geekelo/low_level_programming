#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the base 10 input
 * @index: the positionto turn off
 * Return: 1 if successful and -1 if not possible
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);

	/* ~ turns all values on except the target possition */
	*n = *n & ~(1 << index);
	return (1);
}

