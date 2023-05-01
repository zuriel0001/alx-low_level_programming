#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list
 *
 * @head: pointer to pointer to first node
 * @index: index of a node
 *
 * Return: nth node of a listint_t linked list or 0 if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *any_node;

	if (i > index)
		return (NULL);

	for (i = 0, any_node = head; i < index; i++)
	{
		any_node = any_node->next;
	}
	return (any_node);
}
