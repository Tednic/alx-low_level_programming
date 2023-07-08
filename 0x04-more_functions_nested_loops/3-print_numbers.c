#include "main.h"

/**
  * print_numbers - function prints numbers from 0 to 9
  */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number % 10 + '0');
	}
	_putchar('\n');
}
