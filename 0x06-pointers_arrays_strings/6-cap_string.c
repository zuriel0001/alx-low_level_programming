#include "main.h"
/**
* cap_string - capitalizes all words of a string with conditions
* @str: input string
*
* Return: pointer to resulting string
*/
char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		if (i == 0 ||
			str[i - 1] == ' ' ||
			str[i - 1] == '\t'||
			str[i - 1] == '\n'||
			str[i - 1] == ',' ||
			str[i - 1] == ';' ||
			str[i - 1] == '.' ||
			str[i - 1] == '!' ||
			str[i - 1] == '?' ||
			str[i - 1] == '"' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
	}

	return (str);
}
