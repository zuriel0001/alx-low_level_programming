#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 *
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return:  the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr_arr;
	int i, num_int;

	if (min > max)
		return (NULL);

	num_int = max - min + 1;

	ptr_arr = malloc(sizeof(int) * (max - min + 1));
	/* max - min + 1 is the range OR number of integers */

	if (ptr_arr == NULL)
		return (NULL);

	for (i = 0; i < num_int; i++)
		ptr_arr[i] = min++;

	return (ptr_arr);
}
