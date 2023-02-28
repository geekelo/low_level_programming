#include "main.h"
#include <string.h>

/**
* puts_half - reverses array
* @str: param
*/

void puts_half(char *str)
{
int i, j, k;

i = strlen(str);

if (i % 2 == 0 )
{
k = i / 2;
}
else
{
k = (i / 2) + 1;
}
for (j = k + 1; j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
