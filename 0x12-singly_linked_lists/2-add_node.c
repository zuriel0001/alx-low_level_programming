#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: a double pointer to the list_t list
 * @str: new string to be added to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (*(str + len) != '\0') /* same as str[len] != '\0' */
		len++;
	/**
	 * if (!head || !str)
	 * return (NULL);
	*/
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
