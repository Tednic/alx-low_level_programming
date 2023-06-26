#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * it starts with the first character
 * @str: input
 * Return: print string character 
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *k = str;
	int z;

	while (*k != '\0')
	{
		k++;
		i++;
	}
	j = i - 1;

	for (z = 0 ; z <= j ; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
