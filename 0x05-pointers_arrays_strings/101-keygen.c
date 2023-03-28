#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 Success
 * */
int main() 
{
    int total = 2772;
    int count = 0;
    char password[1024];
    int random_char;

    srand(time(NULL)); /*Seed the random number generator*/

    while (total > 122) {
        random_char = (rand() % 125) + 1; /*Generate a random ASCII character between 1 and 125*/
        password[count] = random_char;
        total -= random_char;
        count++;
    }

    password[count] = total; /*Add the remaining total as the last character of the password*/

    printf("%s\n", password); /* Output the generated password*/

    return 0;
}

