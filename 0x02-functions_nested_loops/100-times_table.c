#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * Return:0 if succeesful.
 */

void print_times_table(int n)
{
int i, j;

for (i = 0; i <= n; i++)
{
_putchar(0 + 48);
for (j = 0; i <= n; j++)
{
_putchar(44);
_putchar(32);
}
}
}