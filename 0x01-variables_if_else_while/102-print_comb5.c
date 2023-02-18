#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - This prints the last digit of a random number
*
* Return: Always 0
*/
int main(void)
{
/* your code goes there */
int alpa, bla, coma, spp, y, x, z;

spp = ' ';
coma = ',';
bla = '\n';
for (alpa = '0'; alpa <= '9'; alpa++)
{
	for (x = '0'; x <= '8'; x++)
	{
	for (y = alpa; y <= '9'; y++)
	{
	for (z = x + 1; z <= '9'; z++)
	{
	putchar(alpa);
	putchar(x);
	putchar(spp);
	putchar(y);
	putchar(z);
	if (alpa == '9' && x == '8' && y == '9' && z == '9')
	break;
	putchar(coma);
	putchar(spp);
	}
	z = '0';
	}
	}
}

putchar(bla);
return (0);
}
