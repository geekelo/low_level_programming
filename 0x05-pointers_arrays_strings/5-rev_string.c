#include "main.h"

/**
* rev_string - reverses array
* @s: param
*/

void rev_string(char *s)
{
int i, j, k, temp;
char *str;

str = s;
i = 0;
while (s[i] != '\0')
{
i++;
}

k = 1;

for (j = 0; j < i / 2; j++)
{

temp = *(str + j);
*(str + j) = *(str + (i - k));
*(str + (i - k)) = temp;


k++;
}
}
