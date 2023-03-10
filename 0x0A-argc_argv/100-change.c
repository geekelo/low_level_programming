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
int cents;
int i = 0;
int j = 0;
int arr[5] = {25,10,5,2,1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
	while (cents > 0)
		{
			if (cents >= arr[j])
			{
				cents = cents - arr[j];
				i++;
			}
			else
			{
			j++;
			}
		}
printf("%d\n", i);
return (0);
}
