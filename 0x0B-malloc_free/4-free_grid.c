#include "main.h"
#include <stdlib.h>
/**
  * free_grid - clean up function
  * @grid: pointer to a 2D array
  * @height: number of rows
  * Return: Nothing
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
