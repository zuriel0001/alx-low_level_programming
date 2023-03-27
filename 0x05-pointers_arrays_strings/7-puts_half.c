#include "main.h"
/**
* puts_half - print half  of a string
*
* @str: string
* Description: for odd length, len is (length - 1) / 2
*/
void puts_half(char *str)
{
	int i, len_half;/* i is string index*/
	int len = 0;/*length of string str*/

	/* calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		len_half = len / 2;
	}
	else
	{
		len_half =  (len + 1) / 2;
	}

	for (i = len_half; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
