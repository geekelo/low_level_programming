#include "main.h"
#include <string.h>
#include <ctype.h>

/**
* string_toupper - reverses strings
* @p: param
* Return: the result
*/

char *string_toupper(char *p)
{
int i, v;

v = strlen(p);
for (i = 0; i < v; i++)
{
p[i] = toupper(p[i]);
}
return (p);
}
