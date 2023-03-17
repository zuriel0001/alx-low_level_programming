#include <stdio.h>

/**
 * main - Printing alphabets
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char alpbt;

	alpbt = 'a';
	while (alpbt >= 'a' && alpbt <= 'z')
	{
		putchar(alpbt);
		putchar('\n');
		alpbt++;
	}
	return (0);
}
