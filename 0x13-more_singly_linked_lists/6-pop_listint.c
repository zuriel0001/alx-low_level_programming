#include "lists.h"

/**
 * pop_listint -  a function that deletes the head node of a listint_t
 *
 * @head: pointer to the first node pointer
 *
 * Return: returns the head node’s data (n) or 0 if linked list is empty
 *
 */

int pop_listint(listint_t **head)
{
	int i; /* stores the value of the head node  */
	listint_t *x_node;

	if (*head == NULL)
		return (0);

	if (!head)
		return (0);

	i = (**head).n;
	x_node = (**head).next;

	free(*head);
	*head = x_node;

	return (i);
}
