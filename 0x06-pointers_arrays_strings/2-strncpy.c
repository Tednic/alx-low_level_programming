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
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
