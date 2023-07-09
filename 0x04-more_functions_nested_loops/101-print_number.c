/*
 * File: 101-print_number.c
 * Written by: Umoren Oku
 */

#include "main.h"

/**
  * print_number - the function prints a number of integer type.
  * @n: the number of integer type
  */

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}
