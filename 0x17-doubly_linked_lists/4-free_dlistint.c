#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 *
 * @head: pointer to the list.
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *active_node;
	dlistint_t *next_node;

	if (head)
	{
		active_node = head;
		next_node = head->next;

		while (next_node)
		{
			free(active_node);
			active_node = next_node;
			next_node = next_node->next;
		}
		free(active_node);
	}
}
