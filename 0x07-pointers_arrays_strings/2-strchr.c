#include "main.h"
#include <stdio.h>

/**
* _strchr - finds the first occurence of a character
* @s: array param
* @c: param character
* Return: Amemory address
*/

char *_strchr(char *s, char c)
{
int len = 0;

while (s[len] >= '\0')
{
if (c == s[len])
{
return ((s + len));
}
len++;
}
return ('\0');
}
