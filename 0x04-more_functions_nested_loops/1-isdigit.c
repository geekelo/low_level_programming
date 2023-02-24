#include "main.h"

/**
* _isdigit - tests if the parameter is a digit
* @c: parameter

* Return: 1 if true and 0 if false
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
