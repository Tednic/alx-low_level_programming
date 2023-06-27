#include "main.h"

/**
  * print_last_digit - prints the last digit of a number N
  * @N: input numbwr
  * Return: the value of the last digit
  */

int print_last_digit(int N)
{
	N  = N % 10;
	if (N < 0)
		N = (-1) * N;
	_putchar(N + '0');
	return (N);
}
