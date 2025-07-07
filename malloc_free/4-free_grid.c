#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 *
 * @grid: the input pointer
 * @height: the height of the array
 *
 * Return: return the array at the end or NULL if error or size 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
