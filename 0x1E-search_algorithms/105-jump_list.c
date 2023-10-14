#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: pointer to the first node where value is located
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx, j, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	idx = 0;
	j = 0;

	do {
		prev = list;
                j++;
		idx = j * m;

		while (list->next && list->index < idx)
			list = list->next;

		if (list->next == NULL && idx != list->index)
			idx = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);

	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
