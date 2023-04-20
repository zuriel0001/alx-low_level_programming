#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters
 *
 * @n: number of parameters passed to the func. to be sumed
 * @...: a variable number of parameters to be sumed
 *
 * Return: the sum or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list par; /* holds information needed by other facilities*/

	if (n == 0)
		return (0);

	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(par, int);
	}
	va_end(par);

	return (sum);
}
