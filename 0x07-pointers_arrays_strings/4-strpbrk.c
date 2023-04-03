#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: set of bytes to search for
 *
 * Return: pointer to the first occurrence of any character from `accept`
 *         in `s`, or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
    
    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] != '\0'; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        
        if (needle[j] == '\0')
            return (haystack + i);
    }
    
    return (NULL);
}
