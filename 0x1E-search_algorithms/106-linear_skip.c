#include "search_algos.h"

/**
 * linear_skip - A function that searches for a value in a skip list
 *
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return: pointer on the first node where value is located
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	/* Pointer to the current node being examined in the skip list */
	skiplist_t *seeker;


	if (!list)
		return (NULL);

	seeker = list;
	while (seeker->express && seeker->n < value)
	{
		list = seeker;
		seeker = seeker->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)seeker->index, seeker->n);
	}

	if (seeker->express == NULL)
	{
		list = seeker;
		while (seeker->next)
			seeker = seeker->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)seeker->index);

	while (list != seeker->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
