#include "main.h"


/**
 * set_bit -  a function that sets the value of a bit to 1 at a given index
 *
 * @n: pointer to an integer at the index
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for a failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
