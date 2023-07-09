/*
 * File: 8-print_square.c
 * Written By: Umoren Oku
 */

#include "main.h"

/**
 * print_square - Prints a square with the character #.
 * @size: The square size.
 */

void print_square(int size)
{
	int length, breadth;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (breadth = 0; breadth < size; breadth++)
				_putchar('#');

			if (length == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
