#include <stdio.h>
#include <limits.h>
/**
 * main - loop to generate the first 98 Fibonacci numbers
 *
 * Return: Alway 0 Success
 */
int main(void)
{
	int count;
	unsigned long prev = 1, curr = 2, next_term = 0;
	unsigned long w, x, y, z;
	unsigned long m, n;

	printf("%lu, %lu, ", prev, curr);
	for (count = 0; count < 92; count++)
	{
		next_term = prev + curr;
		prev = curr;
		curr = next_term;
		printf("%lu, ", next_term);
	}
	w = prev / 10000000000;
	x = prev % 10000000000;
	y = curr / 10000000000;
	z = curr % 10000000000;
	for (count = 93; count <= 98; count++)
	{
		m = w + y;
		n = x + z;
		if (n > 10000000000)
		{
			m += 1;
			n -= 10000000000;
		}
		printf("%lu%lu", m, n);
		if (count != 98)
		printf(", ");
		w = y;
		x = z;
		y = m;
		z = n;
	}
	printf("\n");
	return (0);
}
