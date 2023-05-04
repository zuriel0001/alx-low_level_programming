#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int index;
	char *least_bit;

	index = 1;
	least_bit = (char *) &index;

	return (*least_bit);
}
