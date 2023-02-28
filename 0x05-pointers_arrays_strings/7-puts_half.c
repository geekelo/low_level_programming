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

for (j = 0; j < i / 2; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
