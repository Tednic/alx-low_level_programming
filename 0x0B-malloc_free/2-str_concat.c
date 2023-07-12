/*
 * File: 2-str_concat.c
 * Task: Write a function that concatenates two strings.
 * Functuon Prototype: char *str_concat(char *s1, char *s2);
 */

/**
 * str_concat - function concatenates two strings
 * @s1: String 1 to be concatenated
 * @s2: string2 concatenating to s1
 */

#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_i = 0, stringlen = 0;

/* i and concat_i are indices to track s1 and s2 char positions
   * concat_str is the string after s1 and s2 are concatenated
 * concat_i is and index for the resulting concatenated string
 * stringlen is the string length of thw resulting concatenated string.
 */

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		stringlen++;

	/* use malloc to alloxate malloc to concat_str of size stringlen */

	concat_str = malloc(sizeof(char) * stringlen);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}
