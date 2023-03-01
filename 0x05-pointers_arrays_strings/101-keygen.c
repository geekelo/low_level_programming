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
int x, y, size;

size = 14;
srand((unsigned int)(time(NULL)));
x = rand() % 3;
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char sym[] = "!@#$%";
char z[size];

for (y = 0; y < size; y++)
{
if (x == 1)
{
z[y] = alpha[rand() % 26];
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
}}
