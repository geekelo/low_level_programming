#include "function_pointers.h"

/**
 * print_name - calls a function and passes a name to
 * be printed inside a function pointer
 * @name: the name to be printed 
 * @(*f)(char *): function pointer to a function meant
 * to print the name
 */


void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
