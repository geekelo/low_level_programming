#include "main.h"

/**
 * flip_bits - finds the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number in base 10
 * @m: second number in base 10
 * Return: the number of bits you would need to flip to
 * get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	/*takes the xor of both numbers*/
	/* converts the result to base 2 */
	/* sums ll the 1s */
	while (xor)
	{
		count += xor & 1;
		xor = xor >> 1;
	}
	return (count);
}

