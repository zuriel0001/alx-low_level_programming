#include <stdio.h>
/**
 * print_times_table - prints the n times table btn 0 and 15
 *
 *@n: intergers between 0 and 15
 *
 * Return: 0 Success. 1 values below 0 and avove 15
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				printf("%d", i * j);
			}
			else
			{
				printf(", %4d", i * j);
			}
		}
		printf("\n");
	}
}
