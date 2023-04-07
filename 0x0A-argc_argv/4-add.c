#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point a program that adds positive numbers
 *
 * @argv: array os strings
 * @argc: array count
 *
 * Return: 0 if no number is passed to the program,
 * return Error if non digit is encountered and also return 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int j;

			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
