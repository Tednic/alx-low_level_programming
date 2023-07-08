#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the string containing the prefix substring
 * @accept: the prefix substring
 * integer i represents the index of each character in s
 * Return: the number of bytes in s which consist of bytes in accept only
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	unsigned int bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
