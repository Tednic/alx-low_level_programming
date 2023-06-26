#include "main.h"
/**
 * puts_half - a function that prints half of a string, and a new line
 * The function should print the second half of the string
 * If the number of characters is odd
 * the function should print
 * the last n characters of the string
 * where n = (length_of_the_string - 1) / 2
 * @str: input string
 * Return: half of printed input string
 */

void puts_half(char *str)
{
	int i, j, k;

	k = 0;
	for (i = 0; str[i] != '\0'; i++)
		k++;

	j = (k / 2);

	if ((k % 2) == 1)
		j = ((k + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
