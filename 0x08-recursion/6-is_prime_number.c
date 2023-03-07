#include "main.h"

/**
* prime - does further check
* @v: param
* @n: param
* Return: a value
*/



int prime(int v, int n)
{
if ((n % v) == 0)
{
return (0);
}

if (v > (n / 2))
{
return (1);
}
v++;
return (prime(v, n));
}

/**
* is_prime_number - checks if a num is a prime no.
* @n: param
* Return: a value
*/

int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}

return (prime(2, n));
}
