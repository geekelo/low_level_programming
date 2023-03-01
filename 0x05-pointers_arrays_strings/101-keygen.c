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
char z[14];
char alpa[] = "abcdefghijklmnopqrst";
char upper[] = "ABCDEFGHIJKLMNOPQRST";
char sym[] = "!@#$%";
char pac[] = " ";

srand((unsigned int)(time(NULL)));
x = rand() % 3;

while (upper[rand() % 20] != upper[19])
{
for (y = 0; y < 14; y++)
{
if (x == 1)
{
z[y] = upper[rand() % 20];
}
else if (x == 2)
{
z[y] = alpa[rand() % 20];
}
else if (x == 3)
{
z[y] = pac[rand() % 1];
}
else
{
z[y] = sym[rand() % 5];
}

printf("%c", z[y]);
x = rand() % 3;
}
}
printf("Tada! Congrats");
return (0);
}
