#include "main.h"
#include <string.h>
#include <ctype.h>

/**
* cap_string - reverses strings
* @t: param
* Return: the result
*/

char *cap_string(char *t)
{
int i, v;

v = strlen(t);
for (i = 0; i < v; i++)
{
if ((t[i-1] == 32) || (t[i-1] == 46) ||
  (t[i-1] == 59) ||  (t[i-1] == 44) ||
  (t[i-1] == 92) ||  (t[i-1] == 10))
{
t[i] = toupper(t[i]);
}
else
{
t[i] = t[i];
}
}
return (t);
}
