#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to a structure of type list_t
 * Return: the number of nodes that wqs printed
 */

size_t print_list(const list_t *h)
{
	size_t i; /* number of nodes */

	for (; h; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
	}
	return (i);
}
