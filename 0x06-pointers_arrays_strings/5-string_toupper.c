#include "main.h"

/**
  * string_toupper - function to change lowercase letters to uppercase
  * @str: the string whose elements are to be changed
  * Return: returns a pointer to the string that is changed.
  */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (('a' <= str[i]) && (str[i] <= 'z'))
			str[i] = 'A' + (str[i] - 'a');
		i++;
	}

	return (str);

}
