#include<stdio.h>
/**
 * main - prints the size of various types on the computer size.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %d bytes(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long in: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);

}
