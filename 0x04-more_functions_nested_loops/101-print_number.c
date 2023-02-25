#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <math.h>

/**
 * print_number - pints an integer
 * @n: parameter
*/

void print_number(int n)
{
int i, j, k;

j = sizeof(n);

for (i = j; i > 1; i--)
{
k = n / pow(10, i);
_putchar(k + 48);
}
_putchar((n % 10) + 48);
}
