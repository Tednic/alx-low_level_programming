#include <stdio.h>
#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: the number whose binary value is to be printed
  */

void print_binary(unsigned long int n)
{
	if (n != 0)
	{
		if (n >> 1)
/* checks n if it's > 1 by right-shifting it by zero bits */
			print_binary(n >> 1); /* recursive call */
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
