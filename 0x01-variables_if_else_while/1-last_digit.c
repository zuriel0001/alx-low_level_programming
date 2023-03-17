#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determine last digit  of a random num.  and compare it to other number
 *
 * Return: Always (0) Succes
 */
int main(void)
{
	int n, last_dgt;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;
	last_dgt = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dgt);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dgt);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dgt);
	}

	return (0);
}
