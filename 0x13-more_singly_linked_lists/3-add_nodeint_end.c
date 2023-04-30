#include "lists.h"

/**
 *add_nodeint_end - function that adds a new node at the end of a list
 *
 *@head: pointer to first node
 *
 *@n: integer to he added
 *
 *Return: pointer to new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *node_holder;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	(*new_node).n = n;
	(*new_node).next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	node_holder = *head;
	while ((*node_holder).next)
	{
		node_holder = (*node_holder).next;
	}
	(*node_holder).next = new_node;
	return (new_node);
}
