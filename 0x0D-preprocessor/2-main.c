#include <stdio.h>

/**
 * main - entry point
 * a function that prints the name of file its been compiled from
 *
 * Return: Always 0 Success
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
