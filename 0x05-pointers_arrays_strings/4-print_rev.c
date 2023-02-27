#include "main.h"
#include <string.h>

/**
* print_rev - prints the reverse of a string
* @s: param
*/

void print_rev(char *s)
{
int l, r;

l = strlen(s);
for (r = l - 1; r >= 0; r--)
{
_putchar(s[r]);
}
_putchar('\n');
}
