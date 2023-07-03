#include "main.h"

/**
 * _strchr - this function locates a character in a string.
 * @s: The C string to be searched
 * @c: The character to be searched in @s and located
 * int i represents each index in the string @s
 * Return: a pointer to the first element of the string s,
 * if character c is found otherwise a NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
