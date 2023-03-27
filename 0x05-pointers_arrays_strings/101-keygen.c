#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 10
/**
 * main - Entry point
 *
 * Return: Always 0 Success
 * */

	int main(void)
{
	/*Initialize random number generator with current time*/
	srand(time(NULL));

	/*Set of characters allowed in the password*/
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	/*Generate random password*/
	char password[PASSWORD_LENGTH + 1];

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		/*Get a random index within the charset*/
		int index = rand() % strlen(charset);

		password[i] = charset[index];
	}
	/* Null-terminate the password string*/
	password[PASSWORD_LENGTH] = '\0';

	/* Print the password*/
	printf("Random password for 101-crackme: %s\n", password);

	return (0);
}

