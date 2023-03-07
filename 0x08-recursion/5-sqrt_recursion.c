#include "main.h"
int sqr(int x, int n);

/**
* _sqrt_recursion - finds the square root
* sqr - finds the square root
* @n: param
* @x: param
* Return: result
*/



int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}

return (sqr(2, n));
}

int sqr(int x, int n)
{
if ((x * x) == n)
{
return (x);
}
else if (x > (n / 2))
{
return (-1);
}
return (sqr(x + 1, n));
}
