#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a memory assigned to a 2 dimensional array of integers.
 * @grid: the inputted multi dimensional array
 * @height: height of the array.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
	}
	free(grid);
}
