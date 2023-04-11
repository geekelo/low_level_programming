#include "main.h"

/**
 * print_binary - converts base 10 to binary
 * using bitwise operator
 * @n: decimal number to convert to binary
 *
 */

void print_binary(unsigned long int n)
{
	/*reduces the decimal number using recursion until n = 2 */
	/* if you use n > 0, it will append an extra 0 at the beginning */

	if (n > 1)
	{
		print_binary(n >> 1);

	}
	/* takes & prints the last digit */
	/* of the binary equivalent from */
	/* the results of the recursion until n = 2 */
	_putchar((n & 1) + '0');

}

