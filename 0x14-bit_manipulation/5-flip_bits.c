#include "main.h"


/**
 * flip_bits - a function that returns the number of bits you
 *             would need to flip to get from one number to another
 *             to get from one number to another
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, bit_count;
	unsigned long int current_bit;
	unsigned long int bits_in_common;

	index = 63;
	bits_in_common = n ^ m;
	bit_count = 0;

	while (index >= 0)
	{
		current_bit = bits_in_common >> index;

		if (current_bit & 1)
			bit_count++;

		index--;
	}

	return (bit_count);
}
