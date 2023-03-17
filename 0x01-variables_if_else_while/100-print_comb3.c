#include <stdio.h>
/**
 * main - Combination of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j < 9)
		{
			if (!(i > j && j == i))
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 8)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}
