#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the minimum number of coins
* the function calc. the min. no. of small coins that can replace
* large one
*
* @argv: array arguments
* @argc: number of arguments
*
* Return: Always 0 Success
*/
int main(int argc, char *argv[])
{
	int cents, i;
	int num_coins_used = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int size = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			num_coins_used++;
		}
	}

	printf("%d\n", num_coins_used);

	return (0);
}
