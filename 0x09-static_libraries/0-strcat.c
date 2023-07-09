#include "main.h"
#include <string.h>
/**
 *_strcat - function appends the copy of a given C-string to another string
 * @dest: the pointer to the destination array, contain a C string,
 * and should have enough buffer to contain the resulting concatenated string.
 * @src: the string to be appended. It shouldn't overlap the destination.
 * Implementation of the function via the code is as follows:
 * make "ptr" to point to the end of the dest string
 * join the characters in src to the dest string
 * dest string is terminated by null byte "\0"
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}
