#include "main.h"
/**
 **_memcpy - a function that copies memory area
 **@srct: memory to be copied
 **@dest: destination memory
 **@n: number of bytes to be copied
 **
 **Return: dest (new destination)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	
	int i, j = n;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
