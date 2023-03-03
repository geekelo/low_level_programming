#include "main.h"
#include <string.h>
#include <ctype.h>

/**
* leet - reverses strings
* @k: param
* Return: the result
*/

char *leet(char *k)
{
int i, j, m;

char al[] = "aAeEoOtTlL";
char num[] = "4433007711";
j = strlen(k);
for (i = 0; i < j; i++)
{
for (m = 0; m < 10; m++)
{
if (k[i] == al[m])
{
k[i] = num[m];
}
}
}
return (k);
}
