#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alwyas 0 Success
 */
int main(void)
{
	int a;
	char *i = "Fizz", *j = "Buzz", *k = "FizzBuzz";

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("%s", k);
		}
		else if (a % 5 == 0)
		{
			printf("%s", j);
		}
		else if (a % 3 == 0)
		{
			printf("%s", i);
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
