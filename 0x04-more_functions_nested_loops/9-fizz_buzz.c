#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alwyas 0 Success
 */
int main(void)
{
	int a;
	char i = "Fizz", j = "Buzz", k = "FizzBuzz";

	for (a = 0; a < 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("%s ", i);
		}
		else if (a % 5 == 0)
		{
			printf("%s ", j);
		}
		else if (a % 15 == 0)
		{
			printf("%s ", k);
		}
		else
		{
			printf("%s ", a);
		}
	}
	return (0);
}
