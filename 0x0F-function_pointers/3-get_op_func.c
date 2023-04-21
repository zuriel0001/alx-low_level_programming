#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - a function that selects the correct
 * function to perform the operation asked by the user
 *
 * @s: pointer to operator
 *
 * Return: a pointer to the corresponding arithmetic operation function
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL},
    };

	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		while (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
