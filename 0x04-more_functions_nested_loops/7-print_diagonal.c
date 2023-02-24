#include "main.h"

/**
 * print_diagonal - prints diaginal lines
 * @n: parameter
*/

void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (i=0; i < n; i++)
{
_putchar('\\');
_putchar('\n');
for (j = 0; j <= n + 1; j++)
{
_putchar('32');
}
}
}
_putchar('\n');
}
