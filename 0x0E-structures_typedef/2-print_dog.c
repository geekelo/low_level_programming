#include "dog.h"
#include <stdio.h>


/**
 * print_dog - prints the values of the struct dog
 * @d: pointer to the struct dog my_dog
 *
 * Description: A function that returns nothing but
 * prints the values assigned to the members of the struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name = (nil)");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner = (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}

