#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * len_finder - function that finds the length of a string
 *
 * @str: pointer to string to be measured
 *
 * Return: The length of the string.
 */

int len_finder(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_xarray - Creates an array of chars and initializes it with
 *                 the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 *
 * Description: If there is insufficient space, the
 *              function exits with a status of 98.
 * Return: A pointer to the array.
 */
char *create_xarray(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	i = 0;
	while (i < (size - 1))
	{
		array[i] = 'x';

		i++;
	}
	array[i] = '\0';

	return (array);
}

/**
 * iterate_zeroes - Iterates through a string of numbers containing
 *                  leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterate through.
 *
 * Return: A pointer to the next non-zero element.
 */

char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function
 *              exits with a status of 98.
 *
 * Return: The converted int.
 */

int get_digit(char c)
{
	int digit;

	digit = c - '0';
	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * str_pdt - Multiplies a string of numbers by a single digit.
 *
 * @buff: pointer to buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @zeroes: The necessary number of leading zeroes.
 *
 * Description: If mult contains a non-digit, the function
 *              exits with a status value of 98.
 */
void str_pdt(char *buff, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = len_finder(mult) - 1;
	mult += mult_len;

	while (*buff)
	{
		*buff = 'x';
		buff++;
	}

	buff--;

	while (zeroes--)
	{
		*buff = '0';
		buff--;
	}

	for (; mult_len >= 0; mult_len--, mult--, buff--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*buff = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*buff = (tens % 10) + '0';
}

/**
 * add_nums - Adds the numbers stored in two strings.
 *
 * @final_prod: The buffer storing the running final product.
 * @next_prod: The next product to be added.
 * @next_len: The length of next_prod.
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	while (next_len >= 0 && *next_prod != 'x')
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;

		next_len--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - a function that multiplies two positive numbers
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = len_finder(argv[1]) + len_finder(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (index = len_finder(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		str_pdt(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
