#include "main.h"

/**
  * get_strlen - returns a string length
  * @s: the measured string
  * Return: string length.
  */

int get_strlen(char *s);
int check_for_palindrome(char *s, int length, int index);
int is_palindrome(char *s);

 /**
  * @length: string length.
  * Return: string length.
  */

int get_strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length = length + get_strlen(s + length);
	}
	return (length);
}

/**
  * check_for_palindrome - check for palondrome in a string
  * @length: the string length
  * @index: The string index of the checked string.
  * @s: the measured string
  * Return: return 1 for palindrome and 0 otherwise.
  */

int check_for_palindrome(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
	return (1);

	if (s[index] == s[length - index - 1])
	return (check_for_palindrome(s, length, index + 1));
	return (0);
}

/**
  * is_palindrome - Confirms a string is a palindrome.
  * @s: The checked string.
  * Return: 1 for palindrome and 0 otherwise.
  */

int is_palindrome(char *s)
{
	int index = 0;

	int length = get_strlen(s);

	if (!(*s))
	return (1);

	else
	return (check_for_palindrome(s, length, index));
}
