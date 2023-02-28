#include "main.h"

/**
*
*
*/

void print_array(int *a, int n)
{
int i, l;

for (i = 0; i < n; i++)
{
l = *(a + i);
if (i < n -1)
{
printf("%d, ", l);
}
else
{
printf("%d\n", l);
}
}
}