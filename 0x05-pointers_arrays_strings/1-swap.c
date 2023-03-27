#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers.
 *
 * @a:  first integer
 * @b: 2nd integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
