#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string
 * Return: stringlength
 */

int _strlen(char *s)
{
	int stringlength = 0;

	while (*s != '\0')
	{
		stringlength++;
		s++;
	}

	return (stringlength);
}
