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
	int j = 0, y;
	long unsigned i = 0;
	char *x;
	va_list args;

	va_start(args, format);

	while ((format != NULL) && (i < strlen(format)))
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
				if ((x != NULL) && (x[0] != '\0'))
				{
					printf("%s", x);
					break;
				}
				printf("(nil)");
				break;
			default:
				y = 1;
		}
		if ((i != (strlen(format) - 1)) && (y == 0))
			printf(", ");
		i++;
		j++;
	}
	printf("\n");
	va_end(args);
}

