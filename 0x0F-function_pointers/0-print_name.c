#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - calls a function and passes a name to
 * be printed inside a function pointer
 * @name: the name to be printed
 * @f: function pointer to a function meant
 * to print the name
 */


void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && ((*f) != NULL))
		f(name);
}

