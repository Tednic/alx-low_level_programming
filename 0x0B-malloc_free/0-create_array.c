/*
 * File: 0-create_array.c
 * Written By: Oku Umoren
 */

#include <stdlib.h>
#include "main.h"

/**
 * create_array - function creates char array initialized with a specific char.
 * @size: The size of the array.
 * @c: the character that initializes the array created.
 * Return: a pointer to the array. NULL if size || array == 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* i represents the array index */

	if (size == 0)
		return (NULL);

	/* use malloc to allocate memory to the array */

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
