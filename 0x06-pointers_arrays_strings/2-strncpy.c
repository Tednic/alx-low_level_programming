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
	char *ptr = dest;

	if (dest == NULL)
	return (NULL);
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);

}
