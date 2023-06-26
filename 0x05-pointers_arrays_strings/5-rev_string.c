#include <stdio.h>
#include "main.h"

/**
 * rev_string - Function that Reverses a string
 * @s: Input string
 * Return: Reversed string
 */

void rev_string(char *s)
{
	char revstr = s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
	i++;
	for (j = 0; j < i; j++)
	{
		i--;
		revstr = s[j];
		s[j] = s[i];
		s[i] = revstr;
	}
}
