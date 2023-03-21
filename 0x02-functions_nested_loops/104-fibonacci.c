#include <stdio.h>
/**
 * main - loop to generate the first 98 Fibonacci numbers
 *
 * Return: Alway 0 Success
 */
int main(void)
{
	int prev = 1;
	int curr = 2;
	int i;

	for (i = 3; i <= 98; i++)
	{
		int next_term = prev + curr;

		prev = curr;
		curr = next_term;
		printf(", %d", curr);
	}
	printf("\n");
	return (0);
}
