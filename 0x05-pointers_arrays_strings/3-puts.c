#include "main.h"
#include <string.h>

/**
* _puts - prints a string to stdout
* @str: param
* Return: a string
*/

void _puts(char *str)
{
int v, i;

i = strlen(str);
for (v = 0; v < i; v++)
{
_putchar(str[v]);
}
_putchar('\n');
}
