#include "main.h"

/**
* _memset - fills memory with a constant byte.
* @s: param array  or meory to be filled
* @b: Character to fill with
* @n: size to fill
* Return: an array
*/

char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
