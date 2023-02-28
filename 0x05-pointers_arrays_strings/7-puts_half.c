#include "main.h"
#include <string.h>

/**
* puts_half - reverses array
* @str: param
*/

void puts_half(char *str)
{
int i, j;

i = strlen(str);

for (j = i / 2; j <= i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
