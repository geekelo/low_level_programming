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
 
for (i = 1; i < argc; i++)
{
j = 0;
while (argv[i][j] != '\0')
{
if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
{
printf("Error\n");
return (1);
}
j++;
}

sum += atoi(argv[i]);

}
printf("%d\n", sum);
return (0);
}
