#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number
 *
 * Return: Always 0 success
 */
int main(void)
{
	long int n, largest_pf;
	long int i = 612852475143;
	double sq_i = sqrt(i);

	for (n = 1; n <= sq_i; n++)
	{
		if (i % n == 0)
		{
			largest_pf = i / n;
		}
	}
	printf("%ld\n", largest_pf);
	return (0);
}
