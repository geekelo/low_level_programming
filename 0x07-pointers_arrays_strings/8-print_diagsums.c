#include "main.h"
#include <stdio.h>

/**
*
*
*
*/

void print_diagsums(int *a, int size)
{
int i, k, k1, j;

k = 0;
i = 0;
k1 = 0;
j = size - 1;
while (i < (size * size))
{
k = k + *(a + i);
i = i + (size + 1);
}

while (j < ((size * size) - (size - 1)))
{
k1 = k1 + *(a + j);
j = j + (size - 1);
}
 
printf("%d, %d\n", k, k1);
}
