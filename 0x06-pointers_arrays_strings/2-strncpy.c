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
	int index = 0;

	int src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
