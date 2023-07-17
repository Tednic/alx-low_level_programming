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
 * @d: The dog whose struct is to be printed. The pointer to the struct.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->owner == NULL)
		d->owner = "(nil)";
	else if (d->name == NULL)
		d->name = "(nil)";
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
