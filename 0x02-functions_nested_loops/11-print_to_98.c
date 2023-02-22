#include "main.h"

/**
 * print_to_98 - returns num fro n - 98
 * 
 * @n: parameter to start form
*/

void print_to_98(int n)
{
int i;

for (i = n; i < 99; i++)
{
    if (n < 0)
    {
        _putchar(45);
        _putchar((n % 10) + 48);
    }
    else if (n > 9)
    {
        _putchar((n / 10) + 48);
        _putchar((n % 10) + 48);    
    }
    else
    {
        _putchar(n + 48);
    }

    _putchar(44);
    _putchar(32);

}
}