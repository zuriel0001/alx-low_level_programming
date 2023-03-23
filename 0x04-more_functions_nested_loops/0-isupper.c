#include "main.h"
/**
 * _isupper - indicates if the arg is a uppercase or not
 *
 * @c: uppercase alphabets in ASCII
 *
 * Return: 1 if c is upper, 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
