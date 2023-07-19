/*
 * Task: Write a function that executes a function
 * given as a parameter on each element of an array.
 * Prototype: void array_iterator(int *array, size_t size, void (*action)(int))
 */

#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 * @array: an integer array of elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
