/*
 * File: 1-strdup.c
 * Task: Write a function that returns a pointer to a newly allocated...
 * ...space in memory, containing a copy of the string given as a parameter.
 * Prototype: char *_strdup(char *str);
 */

#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a memory space newly allocated...
 * ...which contains a duplicate of the string given as parameter.
 * @str: the string given as parameter
 * Return: a oointer to the duplicate string. NULL if functionfails.
 */

char *_strdup(char *str)
{
	char *string_duplicate;
	int i, stringlen = 0;

/* string_duplicate is the new string whuch is a duplicate of str */
/* i is the index of str */
/* stringlen is tge length of the string */

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		stringlen++;

/* allocate memory to string_duplicate using malloc */

	string_duplicate = malloc(sizeof(char) * (stringlen + 1));

	if (string_duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		string_duplicate[i] = str[i];

	string_duplicate[stringlen] = '\0';

	return (string_duplicate);
}
