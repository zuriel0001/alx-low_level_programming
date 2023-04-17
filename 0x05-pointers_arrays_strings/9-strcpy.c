#include "main.h"
/**
 * _strcpy - copy the string pointed
 *
 * @dest: empty array
 * @src: string to be copied
 *
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
