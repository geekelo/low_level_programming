#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabe, in lowercase, followed by a new line ten times
 */
void print_alphabet_x10(void)
{
char x, y;

y = '0';
do {
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
} while (y < 9);
}
