#include "main.h"


/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: a string with fixed set of binary numbers
 *
 * Return: the converted number, or 0 if
 *       there is one or more chars in the string b that
 *       is not 0 or 1 OR 0 when b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	if (!b)
		return (0);
	i = 0;
	num = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		num = 2 * num + (b[i] - '0');
	i++;
	}

	return (num);
}

