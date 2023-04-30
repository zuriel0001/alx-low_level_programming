#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of listint_t list
 *
 * @h: pointer to list in struct listint_s
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_count = 0; /* number of nodes */

	for (; h; h = h->next)
	{
		*n_count++;
		printf("%d\n", h->n);
	}
	return (n_count);
}
