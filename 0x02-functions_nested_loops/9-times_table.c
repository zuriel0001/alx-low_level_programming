#include "main.h"
/**
 * times_table - Print 9 times table
 *
 * Return:  Always 0 Success
 */
void times_table(void)
{
	int x, y, result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = x * y;
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar('  ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
