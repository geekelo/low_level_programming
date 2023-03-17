#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, ven = 0, sum, index, count = 0; 
	char *arr = NULL;

	/*find the length of s1*/
	while (s1[len])
		len++;
	
	if (s2 == NULL)
		s2 = "\0";
	
	while (s2[ven])
		ven++;

	if (ven >= n)
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
	arr[index + 1] = '\0';
	return (arr);	
}