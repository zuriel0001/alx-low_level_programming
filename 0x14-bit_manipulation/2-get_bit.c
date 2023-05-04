#include "main.h"


/**
 * get_bit -  a function that returns the value of a bit at a given index
 *
 * @n: number at the index
 * @index: index of the bit to return
 *
 * Return: value of the bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
	{
		return (-1);
	}

	bit_value = (n >> index) & 1;

	return (bit_value);
}
