#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * Return:0 if succeesful.
 */


void times_table(void)
{
int i, y, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
		y = i * j;
		_putchar(y - '0');
		_putchar(',');
		_putchar(' ');
		}
	_putchar('\n');
	}
}
