#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: the array
 * @n: array length
 *
 * Return: a reversed
 */
void reverse_array(int *a, int n)
{
	int tmp_holder;
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp_holder = a[i];
		a[i] = a[j];
		a[j] = tmp_holder;
	}
}
