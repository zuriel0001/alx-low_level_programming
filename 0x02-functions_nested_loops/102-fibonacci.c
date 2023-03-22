#include <stdio.h>
/**
 * main - loop to generate the first 50 Fibonacci numbers
 *
 * Return: Alway 0 Success
 */
int main(void)
{
	long int a = 1, b =2, c, i;

	printf("%ld, %ld", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %ld", b);
	}
	printf("\n");
	return (0);
}
