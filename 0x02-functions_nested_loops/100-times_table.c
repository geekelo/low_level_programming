#include "main.h"
/**
 * print_times_table - prints 9 times table
 *
 * @n: patameter
 * Return:0 if succeesful.
 */

void print_times_table(int n)
{
int i;

if (n == 0)
{
_putchar(n);
}

else if (n > 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar('0');

}
}
}