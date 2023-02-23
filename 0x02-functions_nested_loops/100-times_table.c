#include "main.h"
/**
 * print_times_table - prints 9 times table
 * @n: patameter
 * Return:0 if succeesful.
 */

void print_times_table(int n)
{
int i, j, k;

if (n == 0)
{
_putchar('0');
_putchar('\n');
}
else if (n > 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
if (k > 99)
{
_putchar(32);
_putchar((k / 100) + '0');
_putchar(((k / 10) % 10) + '0');
_putchar((k % 10) + '0');
if (j == n)
{
break;
}
_putchar(44);
}
else if (k > 9)
{
_putchar(32);
_putchar(32);
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
if (j == n)
{
break;
}
_putchar(44);
}
else
{
if (i >= 0 && j == 0)
{
_putchar(k + '0');
_putchar(44);
}
else{
_putchar(32); _putchar(32);
_putchar(32);
_putchar(k + '0');
if (j == n)
{
break;
}
_putchar(44);
}
}
}
_putchar('\n');
}}}
