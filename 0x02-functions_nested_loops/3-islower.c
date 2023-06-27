#include "main.h"

/**
  * _islower - a function that checks f an inputted character c is in lowercase
  * @c: input caharacter
  * Return: 1 if c is lowercase or 0 otherwise
  */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
