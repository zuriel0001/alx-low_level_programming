#include "main.h"
/**
 * print_numbers - list numbers from 0 to 10
 *
 * Return: 0 Success
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
