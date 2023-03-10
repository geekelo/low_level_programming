#include <stdio.h>
#include <stdlib.h>

/**
* main - function to print arguments
* @argc: param
* @argv: param
* Return: Always 0 on success
*/

int main(int argc, char *argv[])
{
int i, j;
int sum = 0;

 
for (i = 0; i < argc; i++)
{
for (j = 0; j < 1; j++)
{
if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[i]);

}
printf("%d\n", sum);
return (0);
}
