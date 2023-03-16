#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - concate 2 strings
 * @height: param
 * @grid: new string
 */

char *argstostr(int ac, char **av)
{
int i, a, b, k, len;
long unsigned int j;

char *str = NULL;

if (ac <= 0)
{
	return (NULL);
}
len = 0;
for (a = 0; a < ac; a++)
{
b = 0;
while (av[a][b] != '\0')
{
if (av[a] == NULL)
{
	return (NULL);
}
b++;
len++;
}
len++;
}

str = malloc(1 + len * sizeof(char));
if (str == NULL)
{
	return (NULL);
}

k = 0;
while (k < len)
{
for (i = 0; i < ac; i++)
{
	for (j = 0; j <= strlen(av[i]); j++)
	{
	if (av[i][j] == '\0')
	{
		str[k] = '\n';
	}
	else
	{
	str[k] = av[i][j];
	
	}
	k++;
	}
	
	}
}
str[len] = '\0';
return (str);
}
