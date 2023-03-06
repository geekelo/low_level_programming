#include "main.h"

/**
* _strstr - first occurrence of a substring
* @haystack: param
* @needle: param
* Return: first occurence
*/

char *_strstr(char *haystack, char *needle)
{
int len = 0;

while (needle[len] != '\0')
{
int gen = 0;

while (haystack[gen] != '\0')
{
if (needle[len] == haystack[gen])
{
return ((haystack + gen));
}
gen++;
}
len++;
}
return (0);
}
