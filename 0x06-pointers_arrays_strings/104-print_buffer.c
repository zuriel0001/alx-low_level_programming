#include <stdio.h>
#include "main.h"
/**
* print_buffer - a function that prints a buffer.
* @b: b is baffer pointer
* @size: buffer size in bytes
* Return: void
*/
void print_buffer(char *b, int size)
{
	int j, i;
	int counter;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (counter = 0; counter < size; counter += 10)
	{
		j = size - counter < 10 ? size - counter : 10;
		printf("%08x: ", counter);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + counter + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + counter + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
	}
}


