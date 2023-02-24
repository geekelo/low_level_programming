#include <stdio.h>

/**
 * main - prints fizzbuzz
 * Return: Always 0
*/

int main(void)
{
int i;
for (i = 0; i < 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i)
}

if (i < (size - 1))
{
printf(" ");
}

}
return (0);
}
