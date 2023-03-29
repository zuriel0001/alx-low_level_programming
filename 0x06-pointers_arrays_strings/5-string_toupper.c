#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *@s: the pointer
 * Return: upper case
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{	
			s[i] -= ('a' - 'A');

		/**
		 * it could also be s[i] =  s[i] - 32
		* or s[i] = s[i] - ('a' - 'A')
		* ASCII number difference btwn lower and upper case
		*/
		}
		i++;
	}
	return (s);
}
