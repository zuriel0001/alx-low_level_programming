#include "main.h"
/**
 * is_prime_number - a function that determine if an integer is prime 
 * or not.
 *
 *@n: integer value (input)
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	if (n % 2 == 1)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
