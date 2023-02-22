#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * Return:0 if succeesful.
 */


void times_table(void)
{
int i, y, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
			for (j = 1; j <= 9; j++)
			{
				_putchar(44);
				_putchar(32);

				y = i * j;
					if (y <= 9)
					{
						_putchar(32);
						_putchar(y + 48);
					}
					else
					{
					
						_putchar((y / 10) + 48);
						_putchar((y % 10) + 48);
					}
			}
		_putchar('\n');
	}
}
