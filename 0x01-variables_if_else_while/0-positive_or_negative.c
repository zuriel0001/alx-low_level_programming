#include <stdio.h>
#include <stdlin.h>
#include <time.h>

/**
 * main - Determine if a number is positive or not
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand((time(NULL));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive", n);
	}
	else if (n == 0)
	{
	printf("%  is zero", n);
	}
	else
	{
	printf("%d is negative", n);
	}
	return (0);
}



