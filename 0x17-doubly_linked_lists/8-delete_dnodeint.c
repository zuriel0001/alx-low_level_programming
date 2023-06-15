#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes node from a
 * dlistint_t at a given index
 *
 * @head: pointer to the first node of the dlistint_t
 * @index: index of the node to be deleted
 *
 * Return: 1 on success Otherwise -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_node;

	if (!*head)
		return (-1);

	tmp_node = *head;
	while (index != 0)
	{
		if (!tmp_node)
			return (-1);

		tmp_node = tmp_node->next;
		index--;
	}

	if (tmp_node == *head)
	{
		*head = tmp_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp_node->prev->next = tmp_node->next;

		if (tmp_node->next != NULL)
			tmp_node->next->prev = tmp_node->prev;
	}

	free(tmp_node);
	return (1);
}
