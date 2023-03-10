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
int multi;

if (argc != 3)
{
printf("Error");
return (1);
}

multi = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multi);
return (0);
}
