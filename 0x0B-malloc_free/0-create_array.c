#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: size of array
 * @c: specific char for arrays to be initilised with.
 *
 * Return: pointer to array or NULL if size = 0 or fial
 *
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	free(p);
	return (p);
}
