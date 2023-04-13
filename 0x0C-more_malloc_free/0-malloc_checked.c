#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc
 *
 * @b: memory size
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{

	void *p; /* void pointer for greater flexibilty  takes any varibake type */

	p = malloc(b);

	if (p = NULL)
	{
		exit(98);
	}
	return (p);
}
