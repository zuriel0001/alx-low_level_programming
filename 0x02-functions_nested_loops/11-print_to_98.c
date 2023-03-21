#include "main.h"
/**
 * print_to_98 - print al natural numbers from n to 98
 *
 * @n: number inputed
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	else
	{
		for (; n <= 98; n++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
}
