#include "lists.h"

/**
 * free_listint_safe -  a function that frees a listint_t list
 * @h: pointer to firdt node
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp_p;/* create a temporary pointer */
	size_t list_len; /* store the length of the list */
	int diff;
	/**
	 * diff store the difference in memory address
	 * between current node and next node
	 */

	if (!*h)
		return (0);

	list_len = 0;

	for (; *h; list_len++)
	{	/* calculate the difference in memory address */

		diff = *h - (*h)->next;

		if (diff > 0)/* if the difference is greater than 0, there is a loop */
		{
			temp_p = (*h)->next;
			free(*h);
			*h = temp_p;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	*h = NULL;

	return (list_len);
}
