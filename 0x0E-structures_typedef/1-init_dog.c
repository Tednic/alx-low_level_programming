/*
 * Task: Write a function that initialize a variable of type struct dog
 * Filename: 1-init_dog.c
 * Prototype: void init_dog(struct dog *d, char *name, float age, char *owner)
 */

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - this function Initializes a variable of type struct dog.
 * @d: The dog to be initialized by the function
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
