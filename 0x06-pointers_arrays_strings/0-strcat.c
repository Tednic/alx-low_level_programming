#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  *_strcat - function appends the copy of a given C-string to another string
  * @dest: the pointer to the destination array, contain a C string,
  * and should have enough buffer to contain the resulting concatenated string.
  * @src: the string to be appended. It shouldn't overlap the destination.
  * Return: dest
  */

char* _strcat(char* dest, const char* src)
{
	char* ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}
