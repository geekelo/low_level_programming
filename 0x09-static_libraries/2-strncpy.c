#include <string.h>
#include "main.h"

/**
* _strncpy - concat strings again
* @dest: param
* @src: param
* @n: param
* Return: a new string
*/

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
