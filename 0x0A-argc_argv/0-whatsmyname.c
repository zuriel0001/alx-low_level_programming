#include <stdio.h>
/**
* main - entry point
* @argc: length of string
* @argv: array of strins
* Return: name of program
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
