nclude "main.h"
/**
 * * _memset - a function that fills memory with a constant byte
 * * @s: pointer to memory address
 * * @b: bytes to be copied
 * * @n: number of bytes to be changed
 * *
 * * Return: s (the new value for n bytes)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
