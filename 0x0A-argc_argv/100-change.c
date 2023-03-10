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
int i;
int arr[5] = {25,10,5,2,1};
int cents = atoi(argv[1]);

if (argc != 2)
{
printf("Error\n");
return (1);
}

while (cents >= 10)
{
for (i = 0; i < 5; i++)
	{
		if (cents >= arr[i])
		{
			cents = cents - arr[i];
		}
	if (cents < 10)
	{
	break;
	}
	}
	
}
	if (cents == 0)
	{
		cents += 1;
	}
	printf("%d\n", cents);
		return (0);
}	
