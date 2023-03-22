#include <stdio.h>
/**
 * main - loop to generate the first 50 Fibonacci numbers
 *
 * Return: Alway 0 Success
 */
int main(void)
{
	long long a = 1, b =2, c, i;

	printf("%lld, %lld", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;

		a = b;
		b = c;
		printf(", %lld", b);
	}
	printf("\n");
	return (0);
}
