#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: a double pointer to the list_t list
 * @str: a string to which a ew node is added
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* duplicate string */
	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	/* the length of the string */
	new_node->len = strlen(str);

	/* we set the next pointer of the new node to NULL */
	new_node->next = NULL;

	 /* if the list is empty, then we set the head pointer to the new_node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* finding lazt node */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new_node; /* set last node to be new_node */

	return (new_node);
}
