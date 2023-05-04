#include "main.h"


/**
 * print_binary - a function that prints the binary representation of a number
 *
 * @n: the number to be print in binary form
 */

void print_binary(unsigned long int n)
{
	int i;
	int count = 0;/* keeps track of the number of binary digits printed so far*/
	unsigned long int current_bit;/*value of the current bit to be printed*/

	/*iterate over bits of the number from the most significant to the least*/
	for (i = 63; i >= 0; i--)
	{
		/*shift the number to bring the current bit to the least sign.  position*/
		current_bit = n >> i;

		/*if current bit is 1, print '1' & increment the count of printed digits*/
		if (current_bit & 1)
		{
			_putchar('1');
			count++;
		}
		/*if current bit is 0 & we already printed at least one digit, print a '0'*/
		else if (count)
			_putchar('0');
	}
	/* if the number was zero, we still need to print a single '0' digit */
	if (!count)
		_putchar('0');
}
