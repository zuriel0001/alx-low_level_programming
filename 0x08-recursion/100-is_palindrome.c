#include "main.h"

int palindrome_finder(char *s, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - tells you if a string is a palindrome or not
 *
 * @s: the string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (palindrome_finder(s, len));
}
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to be measured
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
        if (*s == '\0')
        {
        return (0);
        }
        return (_strlen_recursion(s + 1) + 1);
}

/**
 * palindrome_finder - determines if a string is a palindrome or not
 *
 * @s: s string
 * @len: the string length
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int palindrome_finder(char *s, int len)
{

	if (len <= 1)
	{
		return (1);
	}
	else if (*s != *(s + len - 1))
	{
		return (0);
	}
	return (palindrome_finder(s + 1, len - 2));
}
