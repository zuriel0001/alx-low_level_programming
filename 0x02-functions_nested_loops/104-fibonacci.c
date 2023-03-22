#include <stdio.h>
/**
 * main - loop to generate the first 98 Fibonacci numbers
 *
 * Return: Alway 0 Success
 */
int main(void)
{
	long int prev = 1;
	long int curr = 2;
	long int i;

	printf("%ld, %ld", prev, curr);

	for (i = 3; i <= 98; i++)
	{
		int next_term = prev + curr;

		prev = curr;
		curr = next_term;
		printf(", %ld", curr);
	}
	printf("\n");
	return (0);
}
