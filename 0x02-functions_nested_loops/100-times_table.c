#include "main.h"
/**
 * print_times_table - prints 9 times table
 *
 * @n: patameter
 * Return:0 if succeesful.
 */

void print_times_table(int n)
{
int i, j, k;


if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar(0 + 48);
for (j = 0; i <= n; j++)
{
_putchar(44);
_putchar(32);
k = i * j;

if (k <= 9)
{
_putchar(44);
_putchar(k + 48);
}
else{
_putchar((k / 10) + 48);
_putchar((k % 10) + 48);
}
 
}
}
}
}
