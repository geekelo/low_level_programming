#include <string.h>
#include "main.h"

/**
* _strncat - concat strings again
* @dest: param
* @src: param
* @n: param
* Return: a new string
*/

char *_strncat(char *dest, char *src, int n)
{
int i, m, k, x;
char ri[50];
char *eri = ri;

m = strlen(dest);
for (i = 0; i < n; i++)
{
dest[m + i] = src[i];
}


return (dest);
}
