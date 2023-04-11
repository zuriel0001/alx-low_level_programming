#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 *
 * @height: first array of integers
 * @width: second array of integers
 *
 * Return: pointer to a 2 dimensional array or NULL if
 *         width or height is 0
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **two_dim_arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	two_dim_arr = malloc(height * sizeof(int *));
	if (two_dim_arr[i] == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		two_dim_arr[i] = malloc(sizeof(int) * width);
		if (two_dim_arr == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(two_dim_arr[j]);
			}
			free(two_dim_arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			two_dim_arr[i][j] = 0;
		}
	}

	return (two_dim_arr);
}

