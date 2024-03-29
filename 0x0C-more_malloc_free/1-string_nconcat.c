#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings
 * @s1: param
 * @s2: param
 * @n: param
 * Return: new array.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, ven = 0, sum, index, count = 0;
	char *arr = NULL;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (s1[len])
		len++;

	while (s2[ven])
		ven++;

	if (n >= ven)
		sum = ven + len;
	else
		sum = n + len;
	arr = malloc((1 + sum) * sizeof(char));
		if (arr == NULL)
		{
			free(arr);
			return (NULL);
		}

	for (index = 0; index < len; index++)
		arr[index] = s1[index];

	while (index < sum)
	{
		arr[index] = s2[count];
		count++;
		index++;
	}
	arr[index] = '\0';
	return (arr);
}
