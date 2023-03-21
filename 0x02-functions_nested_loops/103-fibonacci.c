#include <stdio.h>
/**
 * main - Fibonacci sequence
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int prev = 1;
	int curr = 2;
	int total = 2;

	while (curr <= 4000000)
	{
		int next_term = prev + curr;

		prev = curr;
		curr = next_term;
		if (curr % 2 == 0)
		{
			total += curr;
		}
	}
	printf("%d\n", total);
	return (0);
}
