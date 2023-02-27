#include "main.h"

/**
* swap_int - swaps values of pointers
* @a: pointer
* @b: pointer
*/

void swap_int(int *a, int *b)
{
int c = 0;
int *d = &c;
*d = *a;
*a = *b;
*b = *d;
}
