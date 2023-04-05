#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x^(y)
 *
 * @x: integer
 * @y: integer (exponent)
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	/*y is negative, can't compute power*/
	if (y < 0)
	{
		return (-1);
	}

	/*base case: y is 0  */
	/* any number exponent 0 is 1*/
	if (y == 0)
	{
		return (1);
	}

	/**
	 * multiply x by itself raised to the power of y-1 times
	 * x is the first integer and y-1 is the last value of x
	 */
	return (x * _pow_recursion(x, (y - 1)));
}
