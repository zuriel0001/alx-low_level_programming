#include "main.h"

/**
 * wildcmp - Compare two strings with a special character.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared. It can contain the wildcard character `*`.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
    /* Base case: If both strings are empty, they are identical */
    if (*s1 == '\0' && *s2 == '\0')
        return (1);

    /* If the current characters match or if the wildcard character is present */
    if (*s1 == *s2 || (*s2 == '*' && (*(s2 + 1) == '\0' || *(s2 + 1) == '*') && *s1 != '\0'))
    {
        /* Move to the next characters in both strings */
        return (wildcmp(s1 + 1, s2 + 1));
    }

    /* If the wildcard character is present, move to the next character in s2 */
    if (*s2 == '*')
        return (wildcmp(s1, s2 + 1));

    /* If none of the above conditions are met, the strings are not identical */
    return (0);
}
