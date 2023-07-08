#include "main.h"

/**
  * print_numbers - function prints numbers from 0 to 9 excluding 2 and 4
  */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number != 4 && number != 2)
			_putchar(number % 10 + '0');
	}
	_putchar('\n');
}
