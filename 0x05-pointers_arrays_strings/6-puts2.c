#include "main.h"
/**
* puts2 - prints every other character of a string,
* starting with the first character
*
* @str: string
*/
void puts2(char *str)
{
	int i;
	int len = 0;/*length of string str*/

	/* the length of the string */
	while (str[len] != '\0')
	{
	len++;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
