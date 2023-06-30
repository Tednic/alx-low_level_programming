#include "main.h"

/**
  * _strncpy - copies n characters from the source to the destination string.
  * @dest: the destinationation string
  * @src: the source string
  * @n: the given number of characters to be copied
  * Return: the pointer to memory location of the destination string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
