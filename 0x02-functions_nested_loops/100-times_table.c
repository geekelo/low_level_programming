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

if (n == 0)
{
_putchar('0');
_putchar('\n');
}

else if (n == 2)
{
for (i = 0; i <= 2; i++)
{
_putchar('0');
_putchar(44);
_putchar(32);
_putchar(32);
for (j = 0; j <= 2; j++)
{
k = i * j;
_putchar(k + '0');
if (j == 2){
break;
}
_putchar(44);
_putchar(32);
_putchar(32);

}
_putchar('\n');
}
}
}
