#include "main.h"
/**
 * _puts_recursion -  a function that prints a string, followed by a new line
 *
 * s: the string
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{

	/* base case: end of string*/
	if (*s == '\0')
	{
		return;
	}
	if (*s)
	{
	/* print the current character*/
	_putchar(*s);

	/*call the function recursively with the next character*/
	_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
