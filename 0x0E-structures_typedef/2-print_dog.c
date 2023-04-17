#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a "struct dog"
 *
 * @d: pointer to struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->Owner = "(nil)";

	printf("Name: %d\nAge: %f\nOwner: %s\n", d->name, d->age, d->Owner);
}
