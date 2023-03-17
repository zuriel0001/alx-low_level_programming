#include <stdio.h>
/**
 * main - Printing lower and upper case alphabets
 *
 * Return: Always 0 (Success)
 */
in main(void)
{
	char low, up;

	low = 'a';
	up = 'A';
	while (low <= 'z' && up <= 'Z')
	{
		putchar(low);
		la++;
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);

}
