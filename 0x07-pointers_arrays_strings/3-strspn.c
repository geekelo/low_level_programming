#include "main.h"
#include <stdio.h>

/**
* _strspn - finds the first occurence of a character
* @accept: array param
* Return: Amemory address
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int k = 0;

while (s[i] != '\0')
{
unsigned int j = 0;

while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
k++;
break;
}
j++;
}
if (accept[j] == '\0')
{
break;
}
i++;
}
return (i);  
}
