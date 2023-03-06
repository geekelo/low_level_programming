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

while (s[len] != '\0')
{
int gen = 0;

while (accept[gen] != '\0')
{
if (s[len] == accept[gen])
{
return ((s + len));
}
gen++;
}

len++;
}
return (s = 0);
}
