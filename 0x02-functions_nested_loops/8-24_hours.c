#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: N9thing
 */
void jack_bauer(void)
{
	int i, j;
	int k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i > 2 || (i == 2  && j > 3))
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(':');
						_putchar(k + '0');
						_putchar(l + '0');
						break;
					}
				}
			}
		}
	}
	_putchar('\n');
}
