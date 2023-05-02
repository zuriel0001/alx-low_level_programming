#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: pointer to first node
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *front_node;
	listint_t *back_node;
	/**
	* if (*head == NULL)
		break;

	*/
	while (*head)
	{
		front_node = (*head)->next;
		(*head)->next = back_node;
		back_node = *head;
		*head = front_node;
	}
	*head = back_node;

	return (*head);
}
