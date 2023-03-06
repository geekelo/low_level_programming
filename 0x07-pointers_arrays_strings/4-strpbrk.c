#include "main.h"
#include <stdio.h>

/**
* _strpbrk - finds the first occurence of a character
* @s: array param
* @accept: param character
* Return: Amemory address
*/

char *_strpbrk(char *s, char *accept)
{
int len = 0;

while (s[len] >= 0)
{
int gen = 0;

while (accept[gen] >= 0)
{
if (s[len] == accept[gen])
{
break;
}
gen++;
}
if (s[len] == accept[gen])
{
break;
}
len++;
}
while (s[len] >= '\0')
{
return ((s + len));
len++;
}
return ('\0');
}
