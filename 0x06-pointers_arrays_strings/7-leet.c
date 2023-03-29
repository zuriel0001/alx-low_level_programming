#include "main.h"
/**
* *leet - a function that encodes a string into 1337
*
* @str: input string
*
* Return: str
*/
char *leet(char *str)
{
	int i;

	/* Iterate over the string*/
	for (i = 0; str[i] != '\0'; i++)
	{

		/*Check if the current character is a letter to be replaced*/
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
	}
	return (str);
}

