#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements in a linked
 * @h: pointer to structure
 *
 * Return: number of elements linked
 */

size_t list_len(const list_t *h)
{
	size_t i = 0; /* node count */

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
