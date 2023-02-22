#include "main.h"
#include <stdio.h>

/**
* print_to_98 - returns num fro n - 98
*
* @n: parameter to start from
*/

void print_to_98(int n)
{
int i;


if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d, ", i);
}
}
else if (n > 98)
{
for (i = n; i <= 98; i--)
printf("%d, ", i);
}
else
{
printf("%d", n);
}
}
