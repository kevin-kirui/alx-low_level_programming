#include "main.h"
#include <stdlib.h>

/**
  * free_grid -gird memory freed
  * @grid 
  * @height
  *
  * Return: 1
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
