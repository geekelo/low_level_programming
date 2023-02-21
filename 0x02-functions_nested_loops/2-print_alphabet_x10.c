#include "main.h"
/**
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
char x, y;

y = '0';
do{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
while (y < 9 );
}
