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
		_putchar(lwc);
		lwc++;
	}
	_putchar('\n');
}
