#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 *
 * @argc: lent of string
 * @argv: array/string
 * Return: produt of u arguments or error is arg is less than 2
 */
int main(int argc, char *argv[])
{
	int pdt, i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc - 1; i++)
	{
		/*if (argc >= 2 && i < argc)*/
		/*commented it out */
		{
			pdt = atoi(argv[i]) * atoi(argv[i + 1]);

			printf("%d\n", pdt);
		}
	}
	return (0);
}

