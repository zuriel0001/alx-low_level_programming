#include "lists.h"

/**
 * sum_dlistint -  function that returns the sum of all the
 *		data (n) of a dlistint_t linked list
 * @head: pointer to firt node
 *
 * Return: sum of all data 8n nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int n_sum = 0;

	node = head;
	while (node)
	{
		n_sum += node->n;
		node = node->next;
	}
	return (n_sum);
}
