#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: integer value
 *
 * Reuturn: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)/*The first line has 0 spaces, */
			/*second line has 1 space, and so on, up to n-1 spaces*/
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
