#include "main.h"
/**
 * _isalpha - checks for letters only*
 * @c: The character to print
 *
 * Return: returns zero false and one and true
 *
 */

int print_sign(int n)
{
if (n > '1')
{
_putchar('+');
return (1);
} 
else if (n == 0)
{
_putchar('-');
return (1);
}
else
{
_putchar('-');
return (0);
}
}

