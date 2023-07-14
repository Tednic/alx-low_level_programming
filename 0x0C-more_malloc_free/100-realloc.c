/*
 * Task: Write a function to reallocate a memory block with malloc and free
 * File:
 * Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
 * The contents to be copied to the newly allocated space,
 * from the start of ptr up to the minimum of the old and new sizes
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * If new_size = zero, and ptr != NULL, then the call is == free(ptr). Return NULL
* Don’t forget to free ptr when it makes sense
 */

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer memory allocated previously with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *reallocmem;
	char *ptr_copy, *c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		reallocmem = malloc(new_size);

		if (reallocmem == NULL)
			return (NULL);

		return (reallocmem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	reallocmem = malloc(sizeof(*ptr_copy) * new_size);

	if (reallocmem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	c = reallocmem;

	for (i = 0; i < old_size && i < new_size; i++)
		c[i] = *ptr_copy++;

	free(ptr);
	return (reallocmem);
}
