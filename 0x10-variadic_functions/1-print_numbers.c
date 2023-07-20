/*
 * Task: Write a function that prints numbers, followed by a new line.
 * Prototype: void print_numbers(const char *separator,
 * const unsigned int n, ...)
 * where separator is the string to be printed between numbers
 * and n is the number of integers passed to the function
 * If separator is NULL, don’t print it
 */

#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by \n 
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a_list;

	va_start(a_list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a_list, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
