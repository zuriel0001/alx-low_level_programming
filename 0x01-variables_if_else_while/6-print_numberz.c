#include <stdio.h>
/**
 * main - listing 0 to 9 using putchar and not setting char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numz[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int i;
		for (i = 0; i < 10; i++)
		{
			putchar(numz[i] + '0');
		}
	putchar('\n');
	return (0);
}

