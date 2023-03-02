#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _strncat - concat strings again
* @dest: param
* @src: param
* @n: param
* Return: a value
*/



char *_strncat(char *dest, char *src, int n)
{
int i;
int m, k, x;
char ri[50];
char *eri = ri;

m = strlen(dest);
for (i = 0; i < n; i++)
{
dest[m + i] = src[i];
}
char *p = dest;

x = strlen(src);
m = strlen(dest);
for (k = 0; k < m; k++)
{
*(eri + k) = dest[k];
}
for (k = 0; k < x; k++)
{
*(eri + (m + k)) = src[k];
}


return (dest);
}
