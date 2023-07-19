/*
 * Task: Write a function that prints a name
 * Prototype: void print_name(char *name, void (*f)(char *))
 */

#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the name to be printed
 * @f: a void function pointer
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
