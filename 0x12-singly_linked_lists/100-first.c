#include <stdio.h>

void __attribute__((constructor)) print_b4_main(void);

/**
 * print_b4_main - a function to prjnt string before main
 * Return: nothing
 */

void print_b4_main(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}
