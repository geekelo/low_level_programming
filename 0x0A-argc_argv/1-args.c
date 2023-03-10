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
if (argc < 0)
{
printf("%s", argv[argc - 1]);
}
printf("%d\n", argc);
return (0);
}
