#include "main.h"

/**
  * _strcmp - a function that compares two syrings
  * @s1: string 1
  * @s2: string 2
  * Return: returns an integer indicating the relationship between them
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		break;
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
