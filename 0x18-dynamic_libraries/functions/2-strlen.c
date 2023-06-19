#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: pointer to string
 *
 * Return: i (string length)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
		/*s[i] is used to access the character at index i in the string s*/
	return (i);
}
