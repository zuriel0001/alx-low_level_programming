#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: array of arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0; /* length of the resulting string  */
	int x = 0; /* index for the conct_arg string */
	char *conct_arg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* length of the resulting string */
	for (i = 0; i < ac; i++)
	{	for (j = 0; av[i][j]; j++)
		{
			len ++;
		}
		len++;
	}
	/* allocating memory for the resulting string */
	conct_arg = malloc((len + 1) * sizeof(char));

	if (conct_arg == NULL)
	{
		return (NULL);
	}
	/*iterating &  concatenate the arguments into the resulting string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			conct_arg[x++] = av[i][j];
		}
		conct_arg[x++] = ('\n');
	}
	conct_arg[x] = ('\0');
	return(conct_arg);
}
