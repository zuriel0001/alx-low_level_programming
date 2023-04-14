#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to old memory size
 * @old_size: ols memory size in bytes
 * @new_size: new memory size to be allocated
 *
 * Return: pointer to new momory size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;
	char *old_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	/**
	 * casting the void pointer to the appropriate data
	 * type before performing any arithmetic operations
	 */

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
