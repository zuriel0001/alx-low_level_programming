#include<stdio.h>
/**
 * main - prints the size of various types on the computer size.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of char is: %d bytes(s)\n", sizeof(char));
	printf("The size of int is: %d byte(s)\n", sizeof(int));
	printf("The size of long int is: %d byte(s)\n", sizeof(long int));
	printf("The size of long long int is: %d byte(s)\n", sizeof(long long int));
	printf("The size of float is: %d byte(s)\n", sizeof(float));
	return (0);

}
