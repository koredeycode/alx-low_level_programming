#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a memory assigned to a 2 dimensional array of integers.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
void free_grid(int **grid, int height)
{
	free(grid);	
}
