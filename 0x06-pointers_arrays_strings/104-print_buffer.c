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
	int m, j, i;

    	if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (m = 0; m < size; m += 10)
    {
        j = size - m < 10 ? size - m : 10;
        printf("%08x: ", m);
        for (i = 0; i < 10; i++)
        {
            if (i < j)
                printf("%02x", *(b + m + i));
            else
                printf("  ");
            if (i % 2)
            {
                printf(" ");
            }
        }
        for (i = 0; i < j; i++)
        {
            int c = *(b + m + i);

            if (c < 32 || c > 132)
            {
                c = '.';
            }
            printf("%c", c);
        }
        printf("\n");
    }
}


