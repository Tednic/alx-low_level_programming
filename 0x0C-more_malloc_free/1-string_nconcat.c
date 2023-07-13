/*
 * File: string_nconcat
 * Task: Write a function that concatenates two strings.
 * Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
 */

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2 to appended to s1
 * @n: the first n bytes of s2
 * Return: a pointer to the new string in the heap.
 */

#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string_append;

/* Initialize length of concatenated string to n */
/* index of the concatenated string i is initialized to 0 */

	unsigned int concat_length = n, i;

/* if NULL is passed, treat it as an empty string */

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

/* loop through the characters of s1 and increment concat_length by one */

	for (i = 0; s1[i]; i++)
		concat_length++;

/* use malloc to allocate memory to the concatenated string, string_append */

	string_append = malloc(sizeof(char) * (concat_length + 1));

	if (string_append == NULL)
		return (NULL);

	concat_length = 0;

	for (i = 0; s1[i]; i++)
		string_append[concat_length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		string_append[concat_length++] = s2[i];

	string_append[concat_length] = '\0';

	return (string_append);
}
