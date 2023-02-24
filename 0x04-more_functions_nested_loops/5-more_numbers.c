#include "main.h"

/**
 * more_numbers - prints 0-14
 *
*/

void more_numbers(void)
{
int i, j;
for (i = 0; i < 15; i++)
{
_putchar((i / 10) + 48);
if (i > 9)
{
_putchar((i % 10) + 48);
}
}
_putchar('\n');
}
