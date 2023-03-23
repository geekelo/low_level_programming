#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - can print anything that matches the format specifiers given
 * @format: formats of the arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0, y;
	char *x;
	va_list args;

	int len = strlen(format);

	va_start(args, format);

	while ((i < len) && (format != NULL))
	{
		y = 0;
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				x = va_arg(args, char*);
				if ((x[0] == '\0') || (x == NULL))
					x = "(nil)";
				printf("%s", x);
				break;
			default:
				y = 1;
		}
		if ((i != (len - 1)) && (y == 0))
			printf(", ");
		i++;
		j++;
	}
	printf("\n");
}

