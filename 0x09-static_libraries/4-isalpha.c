#include "main.h"
/**
 * _isalpha - checks for letters only*
 * @c: The character to print
 *
 * Return: returns zero false and one and true
 *
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}

