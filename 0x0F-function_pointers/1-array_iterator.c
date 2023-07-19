/*
 * Task: Write a function that executes a function given
 * as a parameter on each element of an array.
 * Filename: 1-array_iterator.c
 * Prototype: void array_iterator(int *array, size_t size, void (*action)(int))
 */

#include <stdlib.h>
/**
 * array_iterator - Iterates through an array and calls a function
 * @array: an array with elements to be iterated
 * @size: array size
 * @action: is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
/* Each element of the array will be iterated using i */	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
