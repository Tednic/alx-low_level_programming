#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * @src: copying from src
 * @dest: copying to dest
 * Return: dest string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
