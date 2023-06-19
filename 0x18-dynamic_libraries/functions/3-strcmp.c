#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: first string
 * @s2: 2nd string
 * Return: s1 -s2 or 0 if s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);/* the difference between the ASCII values of the
						  *two characters at the current position i
						  */
		}
	}
	return (0);
}
