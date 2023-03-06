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

if ((needle == '\0') || (needle == "") ||
(needle == 0))
{
return (haystack);
}
while (needle[len] >= '\0')
{
int gen = 0;

while (haystack[gen] != '\0')
{
if ((needle[len] == haystack[gen]) &&
(needle[len + 1] == haystack[gen + 1]) &&
(needle[len + 2] == haystack[gen + 2]) &&
(needle[len + 3] == haystack[gen + 3]) &&
(needle[len + 4] == haystack[gen + 4]))
{
return ((haystack + gen));
}
gen++;
}
len++;
}
return (0);
}
