#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - returns random password
* Return: Always 0
*/

int main(void)
{
int x, y;

x = rand() % 3;
srand((unsigned int)(time(NULL)));

char base[] = "abcdefghijklmnopqrstuvwxyz";
char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char sym[] = "!@#$%";
char z[14];

for (y = 0; y < 14; y++)
{
if (x == 1)
{
z[y] = alpa[rand() % 26];
}
else if (x == 2)
{
z[y] = upper[rand() % 26];
}
else
{
z[y] = sym[rand() % 5];
}
printf("%c", z[y]);
x = rand() % 3;
}
return (0);
}
