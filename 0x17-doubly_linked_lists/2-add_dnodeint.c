#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the
 *		beginning of a dlistint_t linked list
 *
 * @head: pointer to the head of the list.
 * @n: int to set in the new node
 *
 * Return: pointer to new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = *head;

	if (*head)
		(*head)->prev = new_head;
	*head = new_head;

	return (new_head);
}
