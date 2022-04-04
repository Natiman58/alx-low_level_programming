#include"main.h"
#include<stdlib.h>
/**
 * free_grid - frees the previous grid functions done by malloc
 * @grid: double pointer to the 2d grid function
 * @height: height of the grid
 * Return:
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
