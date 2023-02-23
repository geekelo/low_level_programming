#include <stdio.h>

/**
* main - prints the sum of mult 3 or 5
*
* Return: Always 0
*/

int main(void)
{
int i, j, k, l;

j = 0;

for (i = 0; i < 1024; i++)
{
k = i % 3;
l = i % 5;
if (k == 0 || l == 0)
{
j = j + i;
}
}
printf("%d\n", j);

return (0);
}
