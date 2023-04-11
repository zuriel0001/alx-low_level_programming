#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that copies strings of a pointer
 *
 * @str: string to be duplicated
 *
 * Return: a pointer to the duplicated string or
 *          NULL if str = NULL or else NULL if insufficient memory
 *          was available
 *
 */
char *_strdup(char *str)
{
	int i = 0, str_len = 0;
	char *str_duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
		str_len++;
	/*str[str_len] is used to access the character at index in the string str */
	}

	str_duplicate = malloc((str_len + 1) * sizeof(char));

	if (str_duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		str_duplicate[i] = str[i];
	}
	return (str_duplicate);
}
