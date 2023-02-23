#include <stdio.h>

/**
* main - prints the sum of mult 3 or 5
*
* Return: Always 0
*/

int main(void)
{


int x;
long int y, z, sum, w, even;

y = 2;
z = 1;
sum = 0;
x = 0;
even = 0;

while (sum <= 4000000)
{
if (x == 1 || x == 2)
{
w = x % 2;
if (w == 0)
{
even = even + x;
}
}
else
{
sum = y + z;

w = sum % 2;
if (w == 0)
{
even = even + sum;
}
z = y;
y = sum;
}
}

printf("%ld\n", even);
return (0);
}