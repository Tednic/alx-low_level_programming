/*
 * File: 0-malloc_checked.c
 * Function prototype: void *malloc_checked(unsigned int b)
 * Task: Write a function that allocates memory using malloc.
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory to an unsigned int
 * @b: the size of memory in bytes to be allocated.
 * Return: void pointer to allocated memory. NULL if memory is insufficient.
 */

void *malloc_checked(unsigned int b)
{
	/*
	 * malloc allocates a single block of storage size of memory size of ...
	 * ...minimum 4bytes for the unsigned integer variable b.
	 */

	void *allocated_memory = malloc(b);

	if (allocated_memory == NULL)
		exit(98);

	return (allocated_memory);
}
