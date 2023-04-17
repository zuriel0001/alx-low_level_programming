[200~#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs
 * @d: pointer to struct dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
