#include "main.h"

/**
* print_array - prints array members
* @n: param1
* @a: param2
*/

void print_array(int *a, int n)
{
int i, l;

if (n > 0)
{
for (i = 0; i < n; i++)
{
l = *(a + i);
if (i < n - 1)
{
printf("%d, ", l);
}
else
{
printf("%d\n", l);
}
}
}
else
{
printf("\n");
}
}
