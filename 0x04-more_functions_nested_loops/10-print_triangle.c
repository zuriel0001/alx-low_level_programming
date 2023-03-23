#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: Size of triangle
 *
 * Return: 0 Success
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < size; x++)
	{
		for (y = size - x; y > 1; y--)
		{
			_putchar(' ');
		}
		for (z = 0; z <= x; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
