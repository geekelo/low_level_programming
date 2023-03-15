#include "main.h"
#include <stdlib.h>

/**
 * free_grid - concate 2 strings
 * @height: param
 * Return: new string
 */

void free_grid(int **grid, int height)
{
int j;

for (j = 0; j < height; j++)
{
free(grid[j]);
}
free(grid);
}
