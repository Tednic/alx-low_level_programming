#include "main.h"

/**
  * _isalpha - this function checks if the character is an alphabet
  * @c: input character
  * Return: 1 if c is a letter in upper or lowercase and 0 otherwise
  */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
