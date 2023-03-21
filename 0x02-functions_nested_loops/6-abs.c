#include "main.h"
/**
 * _abs - Print the absolute value of integers
 *
 * @n: intergers values
 *
 * Return: absolute value
 */
int _abs(int n)
{
	int cal;

	if (n >= 0)
	{
		cal = n;
	}
	else
	{
		cal = (n * -1);
	}
	_putchar('\n');
	return (cal);
}
