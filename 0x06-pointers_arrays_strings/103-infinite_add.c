/*
 * File: 102-infinite_add.c
 * Written By: Umoren Oku
 */

#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - add numbers stored in two strings.
 * @n1: The string that contains first number to be added.
 * @n2: The string that contains the second number to be added.
 * @r: The buffer that stores the result.
 * @r_index: The current index of the buffer.
 * Return: a pointer to the result if it's stored in r. otherwise 0.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int number, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		number = (*n1 - '0') + (*n2 - '0');
		number += tens;
		*(r + r_index) = (number % 10) + '0';
		tens = number / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		number = (*n1 - '0') + tens;
		*(r + r_index) = (number % 10) + '0';
		tens = number / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		number = (*n2 - '0') + tens;
		*(r + r_index) = (number % 10) + '0';
		tens = number / 10;
	}

	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}

	else if (tens && r_index < 0)
		return (0);

	return (r + r_index + 1);
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: 0 if r can't store the result, otherwise a pointer to tye result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_length = 0, n2_length = 0;

	for (index = 0; *(n1 + index); index++)
		n1_length++;

	for (index = 0; *(n2 + index); index++)
		n2_length++;

	if (size_r <= n1_length + 1 || size_r <= n2_length + 1)
		return (0);

	n1 += n1_length - 1;
	n2 += n2_length - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
