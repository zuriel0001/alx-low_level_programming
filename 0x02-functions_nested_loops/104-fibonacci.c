#include <stdio.h>
#include <limits.h>
/**
 * main - loop to generate the first 98 Fibonacci numbers
 *
 * Return: Alway 0 Success
 */
int main(void)
{
	unsigned long prev = 1;
	unsigned long curr = 2;
	unsigned long i;

	printf("%lu, %lu", prev, curr);

	for (i = 3; i <= 98; i++)
	{
		unsigned long next_term = prev + curr;

		prev = curr;
		curr = next_term;
		printf(", %lu", curr);
	}
	printf("\n");
	return (0);
}
