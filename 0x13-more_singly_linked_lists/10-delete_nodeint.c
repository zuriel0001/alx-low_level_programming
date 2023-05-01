#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 *
 *@head: pointer to first node pointer
 *@index: index to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *any_node;

	if (*head == NULL)
		return (-1);

	any_node = *head;
	if (index == 0)
	{
		*head = (**head).next;
		free(any_node);
		return (1);
	}

	for (i = 0; i < index - 1 && any_node != NULL; i++)
	{
		if (!any_node || !(any_node->next))
		{
			return (-1);
		}
		any_node->next = any_node->next;
	}

	new_node = any_node->next;
	any_node->next = new_node->next;
	free(new_node);
	return (1);
}
