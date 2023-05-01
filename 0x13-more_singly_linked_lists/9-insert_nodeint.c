#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to pointer to first node
 * @idx: index to add new node
 * @n: element in new node
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i;
	listint_t *any_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	any_node = *head;

	for (i = 0; i < idx - 1 &&  any_node != NULL; i++)
	{
		any_node = any_node->next;
	}

	if (i != idx - 1 || any_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = any_node->next;
	any_node->next = new_node;

	return (new_node);
}
