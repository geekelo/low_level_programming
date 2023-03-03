#include <string.h>
#include "main.h"

/**
* rot13 - rot13 function
* @test: param
* Return: Test
*/

char *rot13(char *test)
{
int i, m, n, j;

char lc[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
char uc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";


m = strlen(test);
for (i = 0; i < m; i++)
{
if (test[i] >= 'a' && test[i] <= 'z')
{
j =  test[i] - 97;
test[i] = lc[j + 13];
}
else if (test[i] >= 'A' && test[i] <= 'Z')
{
n =  test[i] - 65;
test[i] = uc[n + 13];
}
}
return (test);
}
