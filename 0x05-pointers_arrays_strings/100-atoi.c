#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: integer value of string, or 0 if no number is found
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int digit;

    while (*s != '\0')
    {
        if (*s == '-')
            sign *= -1;

        if (*s >= '0' && *s <= '9')
        {
            digit = *s - '0';

            /* Check for overflow */
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
            {
                return (sign == 1 ? INT_MAX : INT_MIN);
            }

            result = result * 10 + digit;
        }

        /* Exit loop when a number has been found and processed */
        if (result != 0 && (*s < '0' || *s > '9'))
            break;

        s++;
    }

    return (result * sign);
}

