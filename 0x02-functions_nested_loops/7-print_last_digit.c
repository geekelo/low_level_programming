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
l = _putchar(lastdigit);
a = _putchar(l + lastdigit);
return (a);

}