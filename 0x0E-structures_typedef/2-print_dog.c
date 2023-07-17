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
 * Return: void
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
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
