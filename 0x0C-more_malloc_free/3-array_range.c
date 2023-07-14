/*
 * File: 3-array_range.c
 * Prototype: int *array_range(int min, int max);
 * Task: Write a function that creates an array of integers
 */

/**
 * array_range - creates an array of integers with min & max values inclusive
 * @min: the first array element.
 * @max: the last array element.
 * Return: a pointer ro the array created. NULL if fun tion fails or min>max.
 */

#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{

/* Let arrray created be new_array with size, element indexes i */

	int *new_array, i, size;

	if (min > max)
		return (NULL);

/* compute new_array size */
	size = max - min + 1;

/* allocate memory space to new_array with malloc*/
	new_array = malloc(sizeof(int) * size);

	if (new_array == NULL)
		return (NULL);

/* Using for loop, complete new_array with values from min to max */

	for (i = 0; i < size; i++)
		new_array[i] = min++;

	return (new_array);
}
