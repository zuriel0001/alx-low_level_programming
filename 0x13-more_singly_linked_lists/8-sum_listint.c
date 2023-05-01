#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data(n)
 *               of a listint_t linked list
 *
 * @head: pointer to first node
 *
 * Return: sum or 0 if node is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *curr_node;
	int sum = 0;

	if (head == NULL)
		return (0);

	curr_node = head;

	while (curr_node)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;

	}
	return (sum);
}
