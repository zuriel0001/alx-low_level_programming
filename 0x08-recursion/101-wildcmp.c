#include "main.h"

/**
 * wildcmp - compares two strings with possible wildcards
 * @s1: the first string
 * @s2: the second string, which may contain '*'
 *
 * Return: 1 if the strings match, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*') {
        if (*(s2 + 1) == '*')
            return wildcmp(s1, s2 + 1);
        while (*s1) {
            if (wildcmp(s1++, s2 + 1))
                return 1;
        }
        return !*s2;
    }
    if (*s1 == '\0' || *s2 == '\0')
        return (*s1 == *s2);
    if (*s1 == *s2 || *s2 == '?')
        return wildcmp(s1 + 1, s2 + 1);
    return 0;
}
