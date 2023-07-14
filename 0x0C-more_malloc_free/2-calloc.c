/*
 * File: _calloc
 * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 * Task: Write a function that allocates memory for an array, using malloc.
 */

/**
  * _calloc - function that allocates memory for an array.
  * @nmemb: the count of array elements
  * @size: The size of each element in bytes of the aeray..
  * Return: a pointer to the mem allocated. Otherwise NULL for if malloc fails
  * and nmemb || size == 0
  */

#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated_memory;
	unsigned int memsize_InBytes;
	unsigned int i;
	char*c;

	if (nmemb == 0 || size == 0)
		return (NULL);

/* Let's calculate the actual array memory in bytes-unsigned memsize_InBytes */
	memsize_InBytes = nmemb * size;

/* allocate a block og memory using malloc */
	allocated_memory = malloc(memsize_InBytes);

	if (allocated_memory == NULL)
		return (NULL);

	c = allocated_memory;

/* Initialize allocated memory block to zero */
/* Fill up the mem via loop by iterating with i eith the pointer, c */
	for (i = 0; i < (nmemb * size); i++)
		c[i] = '\0';

	return (allocated_memory);
}
