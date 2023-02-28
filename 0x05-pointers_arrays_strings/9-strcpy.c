#include "main.h"

/**
* _strcpy - copies text
* @src: param
* @dest: param
* Return: a new aray
*/

char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
while (i >= 0)
{

*(dest + i) = *(src + i);
if (*(src + i) == '\0')
break;
i++;
}  
return (dest);
}
