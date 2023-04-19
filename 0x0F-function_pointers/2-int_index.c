#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer and returns the index
 *
 * @array: pointer to array
 * @size: size of array
 * @cpm: pointer to a function to be used to compare values
 *
 * Return: index of the first element for which the cmp function
 * does not return 0 or -1 if no element matches or size <= -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cpm == NULL)
	{
		return (-1);
	}
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
