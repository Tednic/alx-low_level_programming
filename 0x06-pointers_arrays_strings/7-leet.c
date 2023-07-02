#include <stdio.h>

/**
  * leet - a function that encodes a string into leet (1337).
  * @str: The string to be encoded into 1337
  * Only one if and two loops are use in the code
  * Switch and any ternary operation was not use
  * Letters a and A should be replaced by 4
  * Letters e and E should be replaced by 3
  * Letters o and O should be replaced by 0
  * Letters t and T should be replaced by 7
  * Letters l and L should be replaced by 1
  * Return: a pointer to the string encoded is returned.
  */

char *leet(char *str)
{
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	int i = 0;

	int j;

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
				str[i] = j + '0';
		}

		i++;
	}

	return (str);
}
