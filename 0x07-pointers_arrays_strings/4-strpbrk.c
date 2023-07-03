#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: is the string that is to be searched.
 * @accept: the set of bytes that is to be searches for.
 * integer i represents the index of each character in s
 * Return: NULL if no matched or a pointer to the matched bytes if found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
