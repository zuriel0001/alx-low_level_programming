#include "main.h"
/**
* factorial - a function that returns the factorial of a given number
*
* @n: input integer
*
* Return: -1 if n is less than 0, return the factorial if n >= 0
*/
int factorial(int n)
{       
	if (n < 0)
	{       
		return (-1);
	}
	if (n == 0)
	{
		return(1);
	}
	return (n * factorial(n-1));
} 
