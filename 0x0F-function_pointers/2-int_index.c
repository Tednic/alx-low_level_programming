#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @cmp: a pointer to the function to be used to compare values
 * @array: contaibs elements to be searched for integers
 * @size: the number of elements in the array array
 * Return: return -1 if no match and size <= 0. otherwise
 * the index for first element where the cmp function doe snot  return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
/* int i iterates over the array elements btw  0 to size during search */

	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
