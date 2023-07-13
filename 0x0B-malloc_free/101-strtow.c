/*
 * File: 101-strtow.c
 * Task: Write a function that splits a string into words
 * prototype: char **strtow(char *str)
 */

#include "main.h"
#include <stdlib.h>

/**
 * word_length - tracks the index that indicates...
 * ...the position of the first word in a string terminates.
 * @str: the string containing the words to be searched
 * Return: the index ppsition that indicates the end...
 * ...of the first word - pointed to by a string.
 */

int word_length(char *str)
{
	int i = 0, wordlength = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		wordlength++;
		i++;
	}

	return (wordlength);
}

/**
 * word_counts - Counts the words present within a string.
 * @str: The stringcontaining the words
 * Return: The wordcount in str.
 */

int word_counts(char *str)
{
	int i = 0, wordcount = 0, wordlength = 0;

	for (i = 0; *(str + i); i++)
		wordlength++;

	for (i = 0; i < wordlength; i++)
	{
		if (*(str + i) != ' ')
		{
			wordcount++;
			i += word_length(str + i);
		}
	}

	return (wordcount);
}

/**
 * strtow - function Splits a string into words.
 * @str: The string the function splits.
 * Return: NULL for str == NULL || == "" || function fails.
 * Otherwise a pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	char **array_of_strings;
	int i = 0, wordcount, wc, alphabets, a;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wordcount = word_counts(str);
	if (wordcount == 0)
		return (NULL);

	array_of_strings = malloc(sizeof(char *) * (wordcount + 1));
	if (array_of_strings == NULL)
		return (NULL);

	for (wc = 0; wc < wordcount; wc++)
	{
		while (str[i] == ' ')
			i++;

		alphabets = word_length(str + i);

		array_of_strings[wc] = malloc(sizeof(char) * (alphabets + 1));

		if (array_of_strings[wc] == NULL)
		{
			for (; wc >= 0; wc--)
				free(array_of_strings[wc]);

			free(array_of_strings);
			return (NULL);
		}

		for (a = 0; a < alphabets; a++)
			array_of_strings[wc][a] = str[i++];
		array_of_strings[wc][a] = '\0';
	}
	array_of_strings[wc] = NULL;

	return (array_of_strings);
}
