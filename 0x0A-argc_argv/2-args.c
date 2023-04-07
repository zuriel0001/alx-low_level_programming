#include <stdio.h>
/**
* main - entry point prints all arguments it received
* the string with each world on a new line
* @argc: length of string
* @argv: array of strins
* Return: Always 0 Success
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}

	}
	return (0);
}
