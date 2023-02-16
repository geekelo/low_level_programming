#include <stdio.h>
#include <unistd.h>
/**
 * Main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 *
 * Return : Always 1 (Error)
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n\n", 59);
return (1);
}

