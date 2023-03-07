#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - print string
* @s: param
**/

void _puts_recursion(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}

}
