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
int i, j;

j = strlen(k);
for (i = 0; i < j; i++)
{
if ((k[i] == 'a') || (k[i] == 'A'))
{
k[i] = 52;
}
else if ((k[i] == 'e') || (k[i] == 'E'))
{
k[i] = 51;
}
else if ((k[i] == 'o') || (k[i] == 'O'))
{
k[i] = 48;
}
else if ((k[i] == 't') || (k[i] == 'T'))
{
k[i] = 55;
}
else if ((k[i] == 'l') || (k[i] == 'L'))
{
k[i] = 49;
}
}
return (k);
}
