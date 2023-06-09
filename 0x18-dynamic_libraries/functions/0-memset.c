#include "main.h"

/**
 * * _memset - a function that fills memory with a constant byte
 * * @s: pointer to memory address
 * * @b: bytes to be copied
 * * @n: number of bytes to be changed
 * *
 * * Return: s (the new value for n bytes)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
