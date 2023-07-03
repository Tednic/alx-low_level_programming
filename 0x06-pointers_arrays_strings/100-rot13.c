#include <stdio.h>

/**
  * rot13 - a function that encodes a string using rot13
  * @str: The string to be encoded into rot13
  * Only one if and two loops are use in the code
  * Switch and any ternary operation was not use
  * Return: a pointer to the string encoded is returned.
  */

char *rot13(char *str)
{
	char _alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
	'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
	'U', 'V', 'W', 'X', 'Y', 'Z'};

	char _rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
	'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r',
	's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
	'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm'};

	int i = 0;

	int j;

	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == _alphabet[j])
			{
				str[i] = _rot13key[j];
				break;
			}
		}

		i++;
	}

	return (str);
}
