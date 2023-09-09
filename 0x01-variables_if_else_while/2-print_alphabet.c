#include <stdio.h>

/**
 * main - Printing alphabets
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char alpbt = 'a';

	while (alpbt >= 'a' && alpbt <= 'z')
	{
		putchar(alpbt);
		alpbt++;
	}
	putchar('\n');
	return (0);
}
