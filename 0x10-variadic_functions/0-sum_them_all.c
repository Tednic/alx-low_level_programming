/*
 * Task: Write a function that returns the sum of all its parameters.
 * Prototype: int sum_them_all(const unsigned int n, ...)
 * Filename: 0-sum_them_all.c
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the count of parameters passed to the function
 * @...: variable counts of parameters required by the function
 * Return: 0 for n == o
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a_list;
	unsigned int i = 0;
	int sum = 0;

	va_start(a_list, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(a_list, int);
	}

	va_end(a_list);

	return (sum);
}
