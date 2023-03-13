#include "main.h"
#include <stdlib.h>

/**
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
int i = 0; int j = 0; int l = 0; int k = 0; int m = 0;
char *ptr = NULL;
	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	while (*(s1 + i) != '\0')
	{
	i++;
	l++;
	}
	while (*(s2 + j) != '\0')
		{
			i++;
			j++;
		}

	ptr = (char *) malloc(1 + i * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < l; k++)
		{
			*(ptr + k) = *(s1 + k);
		}
	while(k < i)
		{
			*(ptr + k) = *(s2 + m);
			m++;
			k++;
		}
	*(ptr + i) = '\0';
return (ptr);
}
