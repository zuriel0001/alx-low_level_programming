#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: the new string (concatenated)
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int s2_len = 0;
	int s1_len = 0;
	char *conct_str;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	/* defining string s1 & s2 lengths. you could also use just i and j */

	while (s1[i] != '\0')
		i++;
		s1_len++;

	 while (s2[j] != '\0')
		 j++;
	 	s2_len++;

	conct_str = malloc((s1_len + (s2_len + 1)) * sizeof(char));

	if (conct_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		conct_str[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)

		conct_str[i + j] = s2[j];

	return (conct_str);
}
