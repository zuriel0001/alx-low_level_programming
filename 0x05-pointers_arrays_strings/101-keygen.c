#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 Success
 * */
int main(void)
{
	int count, random_char, total;

	srand(time(NULL));/*Seed the random number generator*/

	for (count = 0, total = 2772; total > 122; count++)
	{
		/*Generate a random ASCII character between 1 and 125*/
		random_char = (rand() % 125) + 1;
		printf("%c", random_char);
		total -= random_char;
	}
	printf("%c", total);/*Output the generated password*/

	return (0);
}
