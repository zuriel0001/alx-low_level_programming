#include <stdio.h>
#define LARGEST 10000000000
/**
 * main -  finds &  prints the first 98 Fibonacci nums, starting with 1 and 2
 *
 * Return: ALways 0 Success
 */
int main(void)
{
	unsigned long int prev = 1, curr = 2, next_term;
	unsigned long int fr1 = 0, fr2 = 0;
	unsigned long int x, z;
	int count;

	printf("%lu, %lu, ", prev, curr);
	for (count = 2; count < 98; count++)
	{
		if (prev + curr > LARGEST || fr2 > 0 || fr1 > 0)
		{
			x = (prev + curr) / LARGEST;
			next_term = (prev + curr) % LARGEST;
			z = fr1 + fr2 + x;
			fr1 = fr2, fr2 = z;
			prev = curr;
			curr = next_term;
			printf("%lu%010lu", fr2, curr);
		}
		else
		{
			next_term = prev + curr;
			prev = curr;
			curr = next_term;
			printf("%lu", curr);
		}

		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
