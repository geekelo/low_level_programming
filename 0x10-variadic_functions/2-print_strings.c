#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to seperate the strings printed
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);
		if (x == NULL)
		x = "(nil)";
		if ((i == (n - 1)) || (separator == NULL))
			printf("%s", x);
		else
			printf("%s%s", x, separator);
	}
	printf("\n");
}
