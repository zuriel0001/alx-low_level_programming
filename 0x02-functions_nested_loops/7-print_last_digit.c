#include "main.h"
/**
 * print_last_digit - print last digit of an integer
 *
 *@i: the integers
 *
 * Return: the last digit of i (positive or negative)
 */
int print_last_digit(int i)
{
	int l = i % 10;

	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l × '0');
		return (l);
	}
	_putchar('\n');
}

