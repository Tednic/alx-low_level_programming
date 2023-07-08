#include "main.h"

/**
  * more_numbers - function prints numbers from 0 t0 14 ten times.
  */

void more_numbers(void)
{
	int i, j;

	/**
	  * i iterates the inner loop ten times from0 to 9
	  * j iterates count of numbers from 0 to 14 for the inner loop
	  */

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
