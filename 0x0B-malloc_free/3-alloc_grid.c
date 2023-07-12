/*
 * File: 3-alloc_grid.c
 * Task: Write a function that returns a pointer to a 2D array of integers.
 * Function Prototype: int **alloc_grid(int width, int height)
 */

#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function returns a pointer to a 2D array of integers.
 * @width: width of the 2D array.
 * @height: height of the 2D array.
 * Returns: a pointer to the 2D array, NULL for width, height <= 0 or failure
 */

int **alloc_grid(int width, int height)
{
	int **array2D;
	int i, j;

	/* **array2D is pointer to the 2D array of integers */
	/* i and j are indices indicating positions of array elements */

	if (height <= 0 || width <= 0)
		return (NULL);

	array2D = malloc(sizeof(int *) * height);

	if (array2D == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array2D[i] = malloc(sizeof(int) * width);

		if (array2D[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array2D[i]);

			free(array2D);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array2D[i][j] = 0;
	}

	return (array2D);
}
