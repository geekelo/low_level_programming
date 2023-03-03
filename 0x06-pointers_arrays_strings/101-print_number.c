#include <string.h>
#include "main.h"
#include <math.h>

/**
* print_number - prints integers using _putchar
* @n: param
*/

void print_number(int n)
{
int j, k, m, v;

v = 0;
if (n < 0)
{
n *= -1;
v = 1;
}
j = 0;
k = n;
m = 1;
while (k > 9)
{
k /= 10;
m *= 10;
j++;
}
if (v == 1)
{
_putchar(45);
}
while (m > 1)
{
_putchar(((n / m) % 10) + '0');
m /= 10;
}
_putchar((n % 10) + '0');
}
