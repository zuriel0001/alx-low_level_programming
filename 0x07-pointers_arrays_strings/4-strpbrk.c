#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: set of bytes to search for
 *
 * Return: pointer to the first occurrence of any character from `accept`
 *         in `s`, or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
