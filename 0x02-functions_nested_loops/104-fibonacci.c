#include <stdio.h>
#define LARGEST 10000000000
/**
 * main -  finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 * 
 * Return: ALways 0 Success
 */
int main(void)
{
	unsigned long int fr1 = 0, prev = 1, fr2 = 0, curr = 2;
	unsigned long int x, y, z;
	int count;

	printf("%lu, %lu, ", prev, curr);
	for (count = 2; count < 98; count++)
	{
		if (prev + curr > LARGEST || fr2 > 0 || fr1 > 0)
		{
			x = (prev + curr) / LARGEST;
			y = (prev + curr) % LARGEST;
			z = fr1 + fr2 + x;
			fr1 = fr2, fr2 = z;
			prev = curr;
			curr = y;
			printf("%lu%010lu", fr2, curr);
		}
		else
		{
			y = prev + curr;
			prev = curr;
			curr = y;
			printf("%lu", curr);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
