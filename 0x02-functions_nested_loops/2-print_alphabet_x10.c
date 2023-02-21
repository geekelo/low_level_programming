#include "main.h"
/**
 *print_alphabet_x10 - alphab in lowercase, and new line, ten times
 */
void print_alphabet_x10(void)
{
char x, y;

for (y = '0'; y < '10'; y++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
