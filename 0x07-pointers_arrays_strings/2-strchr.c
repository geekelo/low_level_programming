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

int len, i;

len = 0;
while (s[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
if (c == s[i])
{
return ((s + i));
break;
}
}
return ('\0');
}
