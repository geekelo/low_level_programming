#include <stdio.h>

/**
* main - prints the sum of mult 3 or 5
*
* Return: Always 0
*/

int main(void)
{
int x;
long int y, z, sum;

y = 2;
z = 1;
sum = 0;

for (x = 1; x <= 50; x++)
{
sum = y + z;
if (x == 1 || x == 2)
{
printf("%d, ", x);
}
else
{

printf("%ld, ", sum);
z = y;
y = sum;
}
}
return (0);
}
