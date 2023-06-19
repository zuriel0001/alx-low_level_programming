#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: is in ASCII
 *
 *_islower indicates if the arg is a lowercase or not
 *
 * Return: 1 if c is lover, 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
