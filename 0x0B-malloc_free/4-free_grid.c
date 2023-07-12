/*
 * File: 4-free_grid.c
 * Task: Write a function that frees a 2 dimensional grid...
 * ...you previously created using alloc_grid function.
 * Function Prototype: void free_grid(int **grid, int height)
 */

#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees the 2D grid created via alloc_grid function.
  * @height: The height of the 2D grid.
  * @grid: The 2D array of integers whose memoey is ro be freed.
  */

void free_grid(int **grid, int height)
{
	int i;

	/* i is the index of each element of the 2D grid's height*/

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
