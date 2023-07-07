#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int cal_hash; /*  stores the calculated hash */
	int c;  /* Variable to store each character of the string */

	cal_hash = 5381;

	while ((c = *str++))
		cal_hash = ((cal_hash << 5) + cal_hash) + c; /* hash * 33 + c */

	return (cal_hash);
}
