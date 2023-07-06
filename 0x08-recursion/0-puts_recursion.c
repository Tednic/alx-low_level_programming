#include "main.h"

/**
 * _puts_recursion - recursively prints a string and a newline
 * @s: the string of char type to be printed.
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

/* the function "_puts_recursion" repeatedly */
/* calls itself with the next chharacter (s + 1) in the string */
/* (*s != '\0') is the base case */
