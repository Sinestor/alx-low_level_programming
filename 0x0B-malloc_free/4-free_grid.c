#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: 2 dimmensional grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}
	free(grid);
}

