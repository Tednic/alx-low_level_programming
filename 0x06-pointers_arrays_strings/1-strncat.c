#include "main.h"
#include <string.h>

/**
  * _strncat - a function that appends a string to another
  * @dest: destination string
  * @src: source string
  * @n: number of elements in src to be copied
  * Return: a pointer to the drstination string
  */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
