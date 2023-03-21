#include "main.h"
/**
 * print_sign - determine if integer is  +, - or 0
 *
 * @n: inters
 *
 * Return: 1 for +ve, -1 for -ve and 0 for zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
