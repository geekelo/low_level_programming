#include "main.h"
#include <string.h>

/**
* puts_half - reverses array
* @str: param
*/

void puts_half(char *str)
{
int i, j, k, m;

m = 0;
i = 0;
while (str[i] != '\0')
{
if (!(str[i] >= 'a') && !(str[i] <= 'z') && !(str[i] >= 'A') && !(str[i] <= 'Z'))
{
m++;
}
m++;
i++;
}

if (m % 2 == 0)
{
k = m / 2;
}
else
{
k = (m / 2) - 3;
}
for (j = k; j < m; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
