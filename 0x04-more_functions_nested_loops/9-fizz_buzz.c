#include <stdio.h>
#include "main.h"

/**
 * main - prints fizzbuzz
 * Return: Always 0
*/

int main(void)
{
int i, j, k;

for (i = 1; i <= 100; i++)
{
j = i % 3;
k = i % 5;

if (j == 0 && k == 0)
{
printf("FizzBuzz");
}
else if (j == 0)
{
printf("Fizz");
}
else if (k == 0)
{
printf("Buzz");
}
else
{
printf("%d", i)
}

if (i < 100)
{
printf(" ");
}

}
printf("\n");
return (0);
}
