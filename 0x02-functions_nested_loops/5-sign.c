#include "main.h"

/**
  * print_sign - this function prints the sign of a number n
  * @n: input number
  * Return: 1, 0, and -1 if n is positive, zero, and negative respectively
  * and print accordingly.
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
