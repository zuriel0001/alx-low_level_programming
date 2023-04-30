#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list
 *
 * @head: pointer to first node pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *node_pointer;

	if (head == NULL)
		return;

	while (*head)
	{
		*head = node_pointer;
		node_pointer = (**head).next;
		free(node_pointer);
	}
	*head = NULL;
}

