#include "main.h"
/**
* _atoi -  convert a string to an integer.
* take into account all - and + signs before the number
* @s: the string
*
* Return: integer value of string, or 0 if no number found
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
	{
		sign *= -1;
	}
	else if (*s == '+')
	{
		/* ignore */
	}
	else if (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		started = 1;
	}
	else if (started)
	{
		/* end of number */
	break;
	}
	s++;
	}

	return (result * sign);
}
