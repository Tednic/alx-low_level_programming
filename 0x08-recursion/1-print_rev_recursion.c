#include "main.h"

/**
 * _print_rev_recursion - recursively prints a string in reverse.
 * @s: the string of char type to be printed in reverse.
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		return;
	}
}

/* the function "_print_rev_recursion" repeatedly */
/* calls itself with the next chharacter (s + 1) in the string */
/* (*s != '\0') is the base case */
