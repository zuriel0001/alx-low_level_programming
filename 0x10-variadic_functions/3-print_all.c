#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * @...: a variable of anything to be printed
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separator = "";
	va_list inputs;

	va_start(inputs, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(inputs, int));
					separator = ", ";
					break;
				case 'i':
					printf("%s%d", separator, va_arg(inputs, int));
					separator = ", ";
					break;
				case 'f':
					printf("%s%f", separator, va_arg(inputs, double));
					separator = ", ";
					break;
				case 's':
					string = va_arg(inputs, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					separator = ", ";
					break;
				default:
					break;
			}
			i++;
		}
	}
	printf("\n");

	va_end(inputs);
}
