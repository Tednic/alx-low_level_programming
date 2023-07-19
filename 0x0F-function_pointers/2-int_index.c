/*
 * Task: Write a function that searches for an integer
 * Filename: 2-int_index.c
 * Prototype: int int_index(int *array, int size, int (*cmp)(int))
 */

#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @size: the number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first element for which
 * the cmp function does not return 0. If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	/* Use j to track the element that is an integer in the array */

	int j;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (j = 0; j < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
