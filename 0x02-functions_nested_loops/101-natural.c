#include <stdio.h>

/**
 * fibo
*/

void fibo(void)
{
    int i, j, k, l;

    j = 0;

    for (i = 0; i < 1024; i++)
    {
        k = i % 3;
        l = i % 5;
        if (k == 0 || l == 0)
            {
                j = j + 1;
            }
    }
    printf("%d\n", j);
}