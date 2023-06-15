#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
*
* @head: pointer to the first element of the list.
* @n: int to set in the new node
*
* Return: address of the new element, or NULL if it failed
**/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head)
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = new_node;
		new_node->prev = temp;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
