#include <stdio.h>
#include <limits.h>
/**
 * main - loop to generate the first 98 Fibonacci numbers
 *
 * Return: Alway 0 Success
 */
int main(void)
{
	unsigned int prev = 1;
	unsigned int curr = 2;
	unsigned int i;

	printf("%u, %u", prev, curr);

	for (i = 3; i <= 98; i++)
	{
		unsigned int next_term = prev + curr;

		prev = curr;
		curr = next_term;
		printf(", %u", curr);
	}
	printf("\n");
	return (0);
}
