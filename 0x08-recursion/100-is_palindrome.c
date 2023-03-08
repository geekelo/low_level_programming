#include "main.h"
int len(char *s);
int test(char *s, int size, int i);

/**
* is_palindrome - prints string from behind
* @s: param
* Return: a value
*/

int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
return (test(s, len(s) - 1, 0));


}
int len(char *s)
{
if (*s == '\0')
{
return (0);
}
return (len(s + 1) + 1);
}

int test(char *s, int size, int i)
{

if (*(s + i) != *(s + size))
{
return (0);
}
if (i >= size)
{
return (1);
}

return (test(s, --size, ++i));
}