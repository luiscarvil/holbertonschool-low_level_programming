#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - frees a 2 dimensional grid previously
 *@grid: double pointer matrix.
 *@height: columns matrix.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
