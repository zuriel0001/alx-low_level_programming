#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type "struct dog"
 * @struct dog - pointer to dogs details
 * @name: pointer to the  dog's name 
 * @age: how old the dog is
 * @owner: pointer to dog owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	/* d is the pointer to the struct dog */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
