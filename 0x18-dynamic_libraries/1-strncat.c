#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: first string
 * @src: 2nd string
 * @n: byte size
 * Return: Void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		if (src[j] == '\0')
		{
			break;
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
