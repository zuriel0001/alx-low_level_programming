#include <stdio.h>
/**
 * main - writing alphabets in reverse manner
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpbt = 'z';

	while (alpbt >= 'a')
	{
		putchar(alpbt);
		alpbt--;
	}
	putchar('\n')
	return (0);
}
