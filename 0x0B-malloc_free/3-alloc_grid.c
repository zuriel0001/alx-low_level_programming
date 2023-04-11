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

	/* Allocate memory for the rows of the grid */
	two_dim_arr = malloc(height * sizeof(int *));
	if (two_dim_arr == NULL)
	{
		/* Free allocated memory and return NULL if memory allocation fails */
		return (NULL);
	}
	 /* Allocate memory for the columns of the grid and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		two_dim_arr[i] = malloc(sizeof(int) * width);
		if (two_dim_arr[i] == NULL)
		{
			/* Free allocated memory and return NULL if memory allocation fails */
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

