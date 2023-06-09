#include "main.h"

/**
* is_prime_number - a function that determine if an integer is prime or not
*@n: integer value (input)
* Return: 1 if the input integer is a prime number, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	/* check if n is greater than 1 and not divisible by 2, 3, 5, and 7 */
	/* that makes it a prime number */
	if (n > 1 &&
		(n % 2 != 0) &&
		(n % 3 != 0) &&
		(n % 5 != 0) &&
		(n % 7 != 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
