#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int stringrev = 0;
	int o;

	while (*s != '\0')
	{
		stringrev++;
		s++;
	}
	s--;
	for (o = stringrev; o  > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
