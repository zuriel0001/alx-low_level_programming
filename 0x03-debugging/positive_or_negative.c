#include "main.h"
/**
 * positive_or_negative - To determine if a number is +ve, -ve or 0
 * @n: integer to be analysed
 */

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
