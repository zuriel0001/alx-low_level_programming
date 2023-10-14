#include "search_algos.h"

/**
 * binary_search_recursive - function that searches for a value in
 * a sorted array of integers. using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return:  index where value is located
 *       -1 If value is not present in array or if array is NULL
 */

int binary_search_recursive(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t idx;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	idx = 0;
	while (idx < size)
	{
		printf("%s %d", (idx == 0) ? ":" : ",", array[idx]);
		idx++;
	}
	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (binary_search_recursive(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (binary_search_recursive(array, half + 1, value));

	half++;
	return (binary_search_recursive(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 *
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 *         -1 If value is not present in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = binary_search_recursive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
