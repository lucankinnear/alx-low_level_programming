#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees memory
 * @grid: 2d grid
 * @height: the height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}


