#include "main.h"
/**
 * _strlen_recursion -  a function that returns the length of a string.
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	/* add 1 to length and call function recursively with next character*/
	return (1 +  _strlen_recursion(s + 1));
}
