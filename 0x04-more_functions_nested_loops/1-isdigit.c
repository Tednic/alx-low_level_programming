#include "main.h"

/**
  * _isdigit - finction checks if a digit is from 0 throigh 9
  * @c: the digit to be cgecked
  * Return: 1 if c is a digit and 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
