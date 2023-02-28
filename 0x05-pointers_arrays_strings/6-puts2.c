#include "main.h"
#include <string.h>

/**
* puts - reverses array
* @str: param
*/

void puts2(char *str)
{
int i, j;

i = strlen(str);
j = 0;

while (j < i)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
j++;

}
_putchar('\n');
}
