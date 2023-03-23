#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all it parameters
 * @n: total number of parameters
 * Return: the sum`:w

 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, total = 0;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		total = total + x;
	}
	return total;
}

