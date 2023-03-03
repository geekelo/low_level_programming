#include <string.h>
#include "main.h"
#include <math.h>

/**
* print_number - prints integers using _putchar
* @n: param
*/

void print_number(int n)
{
unsigned int j, k, m;

if (n < 0)
{
n *= -1;
_putchar(45);

}

k = n;

j = 0;

m = 1;
while (k > 9)
{
k /= 10;
m *= 10;
j++;
}
while (m >= 1)
{
_putchar(((n / m) % 10) + 48);
m /= 10;
}

}
