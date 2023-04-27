#include <stdlib.h>
#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: pointer to to list_t list to be freed
 *Return: nothing
 */

void free_list(list_t *head)
{
	list_t *new_node;

	while (head)
	{
		new_node = head->next;
		free(head->str);
		free(head);
		head = new_node;
	}
}
