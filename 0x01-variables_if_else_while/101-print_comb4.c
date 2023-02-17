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
int alpa, bla, coma, spp, y, x;

spp = ' ';
coma = ',';
bla = '\n';
for (alpa = '0'; alpa <= '7'; alpa++)
{
	for (x = alpa + 1; x <= '8'; x++)
	{
	for (y = x + 1; y <= '9'; y++)
	{
	putchar(alpa);
	putchar(x);
	putchar(y);
	if (alpa == '7' && x == '8' && y == '9')
	break;
	putchar(coma);
	putchar(spp);
	}
	}
}

putchar(bla);
return (0);
}
