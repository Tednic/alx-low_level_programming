/*
 * Task: Write a function that prints a name.
 * Filename: 0-print_name.c
 * Prototype: void print_name(char *name, void (*f)(char *))
 */

/**
 * print_name - a function that prints a name
 * @name: pointer to a name string containing tye name of the person
 * @f: pointer to a functuon
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
		if (name && f)
			f(name);
}
