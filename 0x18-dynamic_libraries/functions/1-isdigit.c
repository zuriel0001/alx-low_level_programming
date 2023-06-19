#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9)
 *
 *@c: integers from 0 to 9
 *
 * Return: 1 for value from 0 to 9 otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
