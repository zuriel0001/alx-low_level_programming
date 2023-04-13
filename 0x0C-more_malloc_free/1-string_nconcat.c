#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: size of second string to concatenate to s1
 *
 * Return: pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0;
	unsigned int s1_len = 0, s2_len = 0;

	while (*s1)
	{
		i++;
		s1_len++;
	}
	while (*s2)
	{
		j++;
		s2_len++;
	}

	if (n >= s2_len)
	{
		str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (s1_len + n + 1));
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		str[i] = s1[i];
	}
	if (n >= s2_len && i < (s1_len + s2_len))
	{
		for (j = 0; j < s2_len; j++)
		{
			str[i] = s2[j];
		}
	}
	else if (n < s2_len && i < (s1_len + n))
	{
		for (j = 0; j < n; j++)
		{
			str[i] = s2[j];
		}
	}
	str[i] = '\0';
	return (str);
}
