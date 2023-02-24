#include "main.h"

/**
 * more_numbers - prints 0-14
 *
*/

void more_numbers(void)
{
int i;
for (i = 48; i < 62; i++)
{
if (i > 57)
{
_putchar(i + 49);
}
else
{
_putchar(i);
}
}
_putchar('\n');
}
