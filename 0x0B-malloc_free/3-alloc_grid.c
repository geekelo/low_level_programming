#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concate 2 strings
 * @s1: param
 * @s2: param
 * Return: new string
 */

int **alloc_grid(int width, int height)
{
int i, j, k;
int **arr;

if ((width <= 0) || (height <= 0))
	return (NULL);
	
arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{	
		free(arr);
		return (NULL);
	}

for (i = 0; i < height; i++)
{
	arr[i] = malloc(width * sizeof(int));

	if (arr[i] == NULL)
	{
	free(arr[i]);
	free(arr);
	return (NULL);
	}
}


for (j = 0; j < height; j++)
{
	for (k = 0; k < width; k++)
	{
	arr[j][k] = 0;
	}
}

	
return (arr);
}
