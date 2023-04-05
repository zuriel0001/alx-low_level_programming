#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 * @s: the string
 *
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	int i, j, temp;

	if (*s == '\0')
	{
		_putchar('\n')
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
