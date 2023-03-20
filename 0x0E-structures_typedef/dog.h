#ifndef DOG_H
#define DOG_H


/**
 * struct dog - a newly defined structure
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner's name
 *
 * Description: a struct that stores details about a dog.
 * It contains the name, age, and owners name of the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

