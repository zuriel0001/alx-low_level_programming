#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string input
 * @accept: string input
 * Return: pointer to the first occurrence of any character from `accept`
 *         in `s`, or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
