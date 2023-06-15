#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the node at index
 * in a dlistint_t linked list
 *
 * @head: pointer to the head of the list
 * @index: nth node
 *
 * Return: node at index or NULL if the node doesn't exist
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int node_cont = 0;

	node = head;
	while (node && node_cont != index)
	{
		node_cont++;
		node = node->next;
	}
	if (node && node_cont == index)

		return (node);

	return (NULL);
}
