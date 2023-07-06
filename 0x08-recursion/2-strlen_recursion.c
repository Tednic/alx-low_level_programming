#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string
 * @s: the string whose length is to be computed.
 * Return: an integer.
 */

int _strlen_recursion(char *s)
{
	int string_length = 0;

	if (*s == '\0')
	return (0);
	else
	{
		++string_length;
		string_length = 1 + _strlen_recursion(s + 1);
	}
	return (string_length);
}
/* (*s == '\0') : the base case for recursive function "_strlen_recursion" */
/* string_length = 1 + _strlen_recursio n(s + 1) is the repetitive case */
