#include "main.h"

/**
 * get_bit - finds and returns the value of a bit at a given index.
 * @n: the given decimal input
 * @index: the given index or position. idex starts at 0
 * Return: returns the value of a bit at a given index if possible
 * and -1 if not possible
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n)
	{
		unsigned long int len = 0, num = n;

		/* calc the length of num */

		while (num > 0)
		{
			num = num >> 1;
			len++;
		}
		if (index > (len + 1))
			return (-1);

		while (index > 0)
		{
			n = n >> 1;
			index--;
		}

		return (n & 1);
	}
	return (-1);
}

