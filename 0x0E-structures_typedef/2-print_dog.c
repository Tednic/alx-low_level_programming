/* 
 * Task: Write a function that prints a struct dog
 * Filename: 2-print_dog.c
 * Prototype: void print_dog(struct dog *d)
 */

#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - this dunction Prints a struct dog.
 * @d: A pointer to the struct dog.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
