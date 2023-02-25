#include "main.h"
#include <stdio.h>

/**
 * main - prints the highest prime factor of n
*/

int main(void)
{

long int i, n;

n = 612852475143;

for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
n = n / i;
i--;
}
}
printf("%ld\n", i);
return (0);
}
