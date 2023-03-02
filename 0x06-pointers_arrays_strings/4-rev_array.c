#include "main.h"
#include <string.h>

/**
* reverse_array - reverses strings
* @a: param
* @n: param
* Return: the result
*/


void reverse_array(int *a, int n)
{
int i, v;
int temp;

v = n - 1;

for (i = 0; i < n / 2; i++)
{
temp = *(a + i);
*(a + i) = *(a + v);
*(a + v) = temp;
v--;
}

}
