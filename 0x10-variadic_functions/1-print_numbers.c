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
	unsigned int i = 0;
	va_list inputs;

	va_start(inputs, n);

	if (separator == NULL)
		return;
	while (i < n)
	{
		printf("%d", va_arg(inputs, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	i++;

	printf("\n")

	va_end(inputs);
}

