#include <stdio.h>

/**
* main - prints the sum of mult 3 or 5
*
* Return: Always 0
*/

int main(void)
{
int x, y;

y = 0;

for (x = 1; x <= 50; x++)
{
y = y + x;
if (x == 1 || x == 2)
{
printf("%d, ", x);
}
else
{
printf("%d, ", y);
}
}
}
