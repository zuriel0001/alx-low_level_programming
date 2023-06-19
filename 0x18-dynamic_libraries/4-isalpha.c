#include "main.h"
/**
 * _isalpha - determine if char is alphabet
 *
 * @c: characters
 *
 * Return: 1 if c is alphabetic, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
