#include "lists.h"

/**
 * listint_len -  a function that returns the number of
 *                elements in a linked listint_t list
 *
 * @h: pointer to listint_t list
 *
 * Return: returns the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_node;

	while (h)
	{
		h = h->next;
		num_node++;
	}
	return (num_node);
}
