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
int y;
char z[14];
char alpa[] = "Tada! Congrats";

srand((unsigned int)(time(NULL)));

for (y = 0; y < 14; y++)
{
z[y] = alpa[y];
printf("%c", z[y]);
}
return (0);
}
