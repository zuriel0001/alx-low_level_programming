#include "main.h"

int _prime_finder(int n, int any_num);

/**
 * is_prime_number - tells you that an integer is prime or not.
 *
 *@n: integer value (input)
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime_finder, n - 1);
	}

/**
 * _prime_finder - determines if an integer is prime or not
 *
 * @any_num: any integer to be checked
 *@n: integer value (to be evaluated)
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int _prime_finder(int n, int any_num)
{
	if (any_num == 1)
	{
		return (1);
	}
	if (n % any_num == 0 && any_num > 0)
	{
		return (0);
	}
	return (_prime_finder(n, n - 1));

}
