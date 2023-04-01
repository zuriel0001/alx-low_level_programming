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
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = 0; j < 10 && i + j < size; j++)
		{
			printf("%02x ", (unsigned char)b[i + j]);
		}
		for (; j < 10; j++)
		{
			printf("   ");
		}
		printf(" ");
		for (j = 0; j < 10 && i + j < size; j++)
		{
			char c = b[i + j];

			if (c >= 32 && c <= 126)
			{
				printf("%c", c);
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
	}
}

