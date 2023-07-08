
/**
  * rot13 - function encodes a string in rot13
  * @str: string to be encoded
  * Return: a pointer to the string encoded
  * i and j are indices that allow us to keep track of the position
  * of elements in the string array.
  */

#include "main.h"

char *rot13(char *str)
{
	int i = 0, j;

	char alphabet[52] = {
		'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R',
		'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'
	};

	char rot13key[52] = {
		'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', 'A', 'B', 'C', 'D', 'E',
		'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'n', 'o', 'p', 'q',
		'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'a', 'b', 'c',
		'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm'
	};

	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13key[j];
				break;
			}
		}

		i++;
	}
	return (str);
}
