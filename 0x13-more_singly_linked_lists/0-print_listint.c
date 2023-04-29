#include "lists.h"

/**
 * print_listint - a function that prints all the elements of "listint_t" list
 *
 * @h: pointer to struct "listint_s"
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0; /* number of nodes */

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		i++;
	}
	return (i);
}
