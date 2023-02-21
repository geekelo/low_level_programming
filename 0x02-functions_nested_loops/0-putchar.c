#include <stdio.h>

/**
* main - prints out a string
*
* Return: Always 0
*/

int main(void)
{
int x;

int  vel[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

for (x = 0; x < 8; x++)
{
putchar(vel[x]);
}
putchar('\n');
return (0);
}
