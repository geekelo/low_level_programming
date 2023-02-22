#include "main.h"
/**
 * print_last_digit - checks for letters only*
 * @n: The character to print
 *
 * Return: returns zero false and one and true
 *
 */

int print_last_digit(int n)
{
int lastdigit;

lastdigit = n % 10;

if ( lastdigit < '0')
{
lastdigit = lastdigit * -1;
}
_putchar(lastdigit + '0');
return (lastdigit);
}
