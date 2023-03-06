#include "main.h"

/**
* _memcpy - fills memory with a constant byte
* @s: param array  or meory to be filled
* @b: Character to fill with
* @n: size to fill
* Return: an array
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}

return (dest);
}
