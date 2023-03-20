#include "dog.h"

/**
 * init_dog - initializes the members of the struct
 * @name: a member
 * @age: member 2
 * @owner: member 3
 *
 * Description: a function tat initialize the struct dog structur
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
	
}

