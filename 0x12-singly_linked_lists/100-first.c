#include "lists.h"

/**
 * print_before_main - prints something before the main
 * function is executed
 */


void __attribute__((constructor))  print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

