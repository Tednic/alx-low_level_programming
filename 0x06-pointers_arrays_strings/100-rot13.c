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

	int index1 = 0;

	int index2;

	while (str[index1])
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (str[index1] == _alphabet[index2])
			{
				str[index1] = _rot13key[index2];
				break;
			}
		}

		index1++;
	}

	return (str);
}
