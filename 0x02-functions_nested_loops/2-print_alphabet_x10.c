#include "main.h"
/**
 *print_alphabet_x10 - alphab in lowercase, and new line, ten times
 */
void print_alphabet_x10(void)
{
char x, y;

y = '0';
while (y < 10)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
y++;
}
_putchar('\n');
}
}
