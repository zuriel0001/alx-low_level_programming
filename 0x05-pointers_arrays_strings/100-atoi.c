#include "main.h"
#include <limits.h>
/**
* _atoi -  convert a string to an integer.
* take into account all - and + signs before the number
* @s: the string
*
* Return: integer val. of string, or 0 if no number found
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';

			/* Check for overflow*/
			if (result > INT_MAX / 10 ||
			(result == INT_MAX / 10 && digit > INT_MAX % 10))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			result = result * 10 + digit;
		}

		s++;
	}

	return (sign * result);
}
