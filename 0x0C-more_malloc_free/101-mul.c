#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size);



/**
 * main - Entry point
 * @argc: length of argv
 * @argv: array of arguments
 * Return: 0 on success
 */


int main(int argc, char *argv[])
{
	int len1 = 0, len2 = 0, x, y = 0, z1 = 0, z2 = 0, total, tmp;
	int *num1, *num2, *ans;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	
	while (argv[1][len1] != '\0')
	{
		if (!(argv[1][len1] >= 48) && !(argv[1][len1] <= 57))
		{
			printf("Error\n");
			exit(98);
		}
		len1++;
	}
	
	while (argv[2][len2] != '\0')
	{
		if (!(argv[2][len2] >= 48) && !(argv[2][len2] <= 57))
		{
			printf("Error\n");
			exit(98);
		}
		len2++;
	}
	
	num1 = _calloc(len1, sizeof(*num1));
	num2 = _calloc(len2, sizeof(*num2));
	if ((num1 == NULL) || (num2 == NULL))
		exit(98);
	
	for (x = len1 - 1; x >= 0; x--)
	{
		num1[z1] = argv[1][x] - '0';
		z1++;
	}
	for (y = len2 - 1; y >= 0; y--)
	{
		num2[z2] = argv[2][y] - '0';
		z2++;
	}
	
	total = len1 + len2;
	ans = _calloc(total, sizeof(*ans));
	if (ans == NULL)
		exit(98);
	for (x = 0; x < len1; x++)
	{
		for (y = 0; y < len2; y++)
		{
			ans[x + y] += num1[x] * num2[y];
		}
	}

	for (x = 0; x < total; x++)
	{
		tmp = ans[x] % 10;
		ans[x + 1] = ans[x] / 10;
		ans[x] = tmp;
	}

	for (x = total - 1; x >= 0; x--)
	{
		if ((ans[x] != 0) || (ans[x] == 0 && ans[x - 1] != 0 && x != total - 1))
		{
			_putchar(ans[x] + '0');
		}	

	}
	_putchar('\n');
	free(ans);
	free(num2);
	free(num1);
	return (0);
	
}





/**
 * _calloc - mimic calloc function
 * @nmemb: param
 * @size: param
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr = NULL;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;

	arr = (void *)arr;
	return (arr);
}




