#include "main.h"


/**
 * clear_bit - a function that sets the value of a given bit to 0
 *
 * @n: a pointer to the number to be change
 * @index: the index of the bit to clear
 *
 * Return: 1 for success, and -1 if an error occur
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

