#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings, followed by a new line
 *
 * @separator: is the string to be printed between the strings
 * @n: number of string passed to the function
 * @...: represent a variable number of arguments in a function.
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *s;

	v_start(str, n);

	if (separator == NULL)
		return;

	s = va_arg(str, char *);

	if (str == NULL)

		printf("(nil)");
	else
		printf("%s", s);

	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);

	printf("\n");

	va_end(str);
}


