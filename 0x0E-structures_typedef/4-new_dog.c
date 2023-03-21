#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - stores values of stuct dog to a pointer
 * @name: param for member name
 * @age: param for member age
 * @owner: param for member owner
 * Return: a initialized pointer or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int lname = 0, x = 0, lowner = 0;

	dog_t *copie = NULL;

	if ((name == NULL) || (owner == NULL))
		return (NULL);
	copie = malloc(sizeof(*copie));
	if (copie == NULL)
	{
		free(copie);
		return (NULL);
	}
	while (name[lname])
		lname++;
	while (owner[lowner])
		lowner++;
	copie->name = malloc((1 + lname) * sizeof(char));
	copie->owner = malloc((1 + lowner) * sizeof(char));
	if ((copie->name == NULL) || (copie->owner == NULL))
	{
	free(copie->name);
	free(copie->owner);
	free(copie);
	return (NULL);
	}
	for (x = 0; x < lname; x++)
		copie->name[x] = name[x];
	copie->name[lname] = '\0';

	copie->age = age;

	for (x = 0; x < lowner; x++)
		copie->owner[x] = owner[x];
	copie->owner[lowner] = '\0';
	return (copie);
}

