#include "main.h"
/**
 * print_alphabet - print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int lwc = 'a';

	while (lwc <= 'z')
	{
		_putchar(lwc + '0');
		lwc++;
	}
	_putchar('\n');
	return (0);
}
