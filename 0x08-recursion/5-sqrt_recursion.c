#include "main.h"

int _sqrt_finder(int n, int any_num);

/**
 * _sqrt_recursion - a function that returns the natural sqrt of a number
 *
 * @n: any integer
 *
 * Return: -1 if n is not natural square root else return sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	/* Call the _sqrt_finder function to find the natural square root */
	return (_sqrt_finder(n, 0));
}
/**
 * _sqrt_finder - checks if a number is a natural
 * square root of a number
 *@n: integer value input
 * @any_num: integers value to be checked
 * Return: the number if its a natural sqrt else -1
 */

	/* Check if any_num is a natural square root of n */
int _sqrt_finder(int n, int any_num)
{
	if (any_num * any_num == n)
	{
		return (any_num);
	}
	if (any_num * any_num > n)
	{
		return (-1);
	}

	/* Recursively call _sqrt_finder with any_num incremented by 1 */
	return (_sqrt_finder(n, any_num + 1));
}
