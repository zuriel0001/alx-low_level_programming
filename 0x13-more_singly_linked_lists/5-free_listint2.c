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

	for (; *head != NULL; *head = (**head).next)
	{
		node_pointer = *head;
		/* *head = (**head).next; */
		free(node_pointer);
	}
	*head = NULL;
}
