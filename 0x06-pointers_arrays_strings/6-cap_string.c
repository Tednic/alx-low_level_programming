#include "main.h"

/**
  * cap_string - function to capitalize all words of a string.
  * Separators of words: space, tabulation,
  * new line, ,, ;, ., !, ?, ", (, ), {, and }
  * @str: string we want to capotalize
  * Return: return a pointer to the string capitalized
  */

char *cap_string(char *str)
{

	int i = 0;

	while (str[i])
	{
		while (!(('a' <= str[i]) && (str[i] <= 'z')))
			i++;

		if (i == 0 ||
		str[i - 1] == '\t' ||
		str[i - 1] == ' ' ||
		str[i - 1] == '\n' ||
		str[i - 1] == '}' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '(' ||
		str[i - 1] == '"' ||
		str[i - 1] == '?' ||
		str[i - 1] == '!' ||
		str[i - 1] == '.' ||
		str[i - 1] == ';' ||
		str[i - 1] == ',')

		str[i] -= 32;
		i++;
	}

	return (str);
}


