#include "main.h"
#include <string.h>
#include <unistd.h>

/**
* rev_string - reverses a string
* @s: param
* Return: reversed string
*/
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void rev_string(char *s)
{
int l, r;

l = strlen(s);
for (r = l - 1; r >= 0; r--)
{
_putchar(s[r]);
}
_putchar('\n');
}
