#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: param
*/

void print_triangle(int size)
{
int i, k, l, m;

k = 1;
l = 0;
m = 0;
for (i = size; i > 0; i--)
{
while (l < (i - 1))
{
_putchar(32);
l++;
}
while (m < k)
{
_putchar(35);
m++;
}
_putchar('\n');
k++;
m = 0;
l = 0;
}
}
