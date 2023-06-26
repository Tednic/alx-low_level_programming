#include "main.h"

/**
 * _puts - a function to print a string
 * followed by a new line, to stdout
 * @str: a string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
