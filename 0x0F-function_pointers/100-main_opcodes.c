#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints the opcodes of itself.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, idx;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	idx = 0;
	while (idx < bytes)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (idx == bytes - 1)
			break;

		printf(" ");

		address++;

		idx++;
	}

	printf("\n");

	return (0);
}
