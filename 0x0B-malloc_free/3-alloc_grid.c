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
int **arr = (int **) malloc(height * sizeof(int *));

for (i = 0; i < width; i++)
{
	arr[i] = (int *) malloc(width * sizeof(int));
}


for (j = 0; j < height; i++)
{
	for (k = 0; k < width; k++)
	{
	arr[j][k] = 0;
	}
}

	
	return (arr);
}