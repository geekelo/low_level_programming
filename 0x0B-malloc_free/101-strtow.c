#include "main.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * nowfree - Prints an array of string
 * @arr: The array to print
 * @word: param
 * Return: void
 */

void nowfree(char **arr, int word)
{
	int j;

	for (j = 0; j < word; j++)
		free(arr[j]);
	free(arr);
}


/**
 * strtow - Prints an array of string
 * @str: The array to print
 *
 * Return: new 2 dim array
 */

char **strtow(char *str)
{
	int i = 0, len = 0, k = 0, line, row = 0, word = 0, col = 0;
	char **arr;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == '\0' || str[i + 1] == ' '))
			word++;
		i++;
	}
	if (str == NULL || word == 0)
		return (NULL);
	arr = malloc((1 + word) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (str[k])
	{
		if (str[k] != ' ')
			len++;
		if  (str[k] != ' ' && (str[k + 1] == '\0' || str[k + 1] == ' '))
		{
			arr[row] = malloc((1 + len) * sizeof(char));
			if (arr[row] == NULL)
			{
				nowfree(arr, word);
				return (NULL);
			}
			for (line = k - len + 1; line <= k; line++)
			{
				arr[row][col] = str[line];
				col++;
			}
			arr[row][col] = '\0';
			col = 0;
			len = 0;
			row++;
		}
		k++;
	}
	arr[row] = NULL;
	return (arr);
}
