#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -  a function that prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: number of intgers passed to the function
 * @...: a variable number of integers to be printed.
 *
 * Return: nothing
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list inputs;

	va_start(inputs, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(inputs, int));


		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(inputs);
}

