#include "main.h"
#include <stdlib.h>

/**
 * word_len - a function that locates the index marking the
 *            end of the first word contained within a string
 *
 * @str: The string to be searched.
 *
 * Return: length of the first word in the string.
 */

int word_len(char *str)
{
	int idx = 0, len = 0;

	/**
	 * iterates until it reaches the end of the string
	 * or encounters a space character
	 */
	while (*(str + idx) && *(str + idx) != ' ')
	{
		len++;
		idx++;
	}

	return (len);
}

/**
 * word_count - Counts the number of words within a string.
 *
 * @str: The string to be searched.
 *
 * Return: The number of words in the str.
 */
int word_count(char *str)
{
	int idx = 0, wrd_count = 0, len = 0;

	while (*(str + idx))
	{
		len++;
		idx++;
	}

	for (idx = 0; idx < len; idx++)
	{
		if (*(str + idx) != ' ')
		{
			wrd_count++;
			idx += word_len(str + idx);
		}
	}

	return (wrd_count);
}

/**
 * strtow - a function that splits a string into words.
 *
 * @str: The string to be split.
 *
 * Return: NULL if !str, str = "", or the function fails
 *         Otherwise - a pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, lts;

	if (!str || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (!strings)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (lts = 0; lts < letters; lts++)
			strings[w][lts] = str[index++];

		strings[w][lts] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
