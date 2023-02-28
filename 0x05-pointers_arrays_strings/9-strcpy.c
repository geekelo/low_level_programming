#include "main.h"

/**
* _strcpy - copies text
* @src: param
* @dest: param
*/

char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
while (src[i] != '\n')
{
*(dest + i) = *(src + i);
i++;

}
*(dest + (i + 1)) = *(src + (i + 1));
  
return (dest);
}
