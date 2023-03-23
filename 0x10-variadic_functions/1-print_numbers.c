#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: a string param
 * @n: number of values
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		if (i == (n - 1))
			printf("%d\n", x);
		else
		{
			if (separator == NULL)
				printf("%d", x);
			else
				printf("%d%s", x, separator);
		}
	}

}

