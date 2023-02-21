#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabe, in lowercase, and a new line ten times
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
}
_putchar('\n');
}
}
