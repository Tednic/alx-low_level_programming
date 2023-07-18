/*
 * Task: Write a function that frees dogs
 * Filename: 5-free_dog.c
 * Prototype: void free_dog(dog_t *d)
 */

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - struct free_dog
 * @d: a pointer to struct free_dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
