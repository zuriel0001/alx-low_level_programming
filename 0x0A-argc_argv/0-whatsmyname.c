#include <stdio.h>
/**
* main - entry point _ print program name
* @argc: length of string (num of arguments)
* @argv: array arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
