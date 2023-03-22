#include <stdio.h>
/**
 * main - loop to generate the first 50 Fibonacci numbers
 *
 * Return: Alway 0 Success
 */
int main(void)
{
	int a = 1, b =2, c, i;

	printf("%d, %d", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;

		a = b;
		b = c;
		printf(", %d", b);
	}
	printf("\n");
	return (0);
}
