#include <stdio.h>
/**
 * main - Printing lower and upper case alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low, up;

	low = 'a';
	up = 'A';
	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);

}
