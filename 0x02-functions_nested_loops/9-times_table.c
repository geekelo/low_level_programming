#include "main.h"
/**
 * times_table - prints all minutes in a day from 00:00
 *
 * Return:0 if succeesful.
 */


 void times_table(void)
{
int i;

	for (i = '0'; i <= '2'; i++)
	{
		_putchar(i * 0);
		_putchar(i * 1);
		_putchar(i * 2);
		_putchar(i * 3);
		_putchar(i * 4);
		_putchar(i * 5);
		_putchar(i * 6);
		_putchar(i * 7);
		_putchar(i * 8);
		_putchar(i * 9);
		_putchar('\n');
	}
}
