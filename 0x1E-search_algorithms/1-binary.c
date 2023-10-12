#include "search_algos.h"

/**
 * binary_search_recursive - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: pointer to the first element of the array
 * @size: The number of elements in array
 * @value: value to search for
 *
 * Return: index of the number
 */
int binary_search_recursive(int *array, size_t size, int value)
{
	size_t half_s = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half_s && size % 2 == 0)
		half_s--;

	if (value == array[half_s])
		return ((int)half_s);

	if (value < array[half_s])
		return (binary_search_recursive(array, half_s, value));

	half_s++;

	return (binary_search_recursive(array + half_s, size - half_s, value)
			+ half_s);
}

/**
 * binary_search - A function that calls to recursive_search to
 * return the index where value is located
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of the value located
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = binary_search_recursive(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
