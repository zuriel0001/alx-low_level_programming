#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 *              by your alloc_grid function
 *
 * @grid: a two dimensional array
 *
 * @height: array of rows
 *
 * Return: Nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		i++;
		free(grid[i]);
	}
	free(grid);
}
