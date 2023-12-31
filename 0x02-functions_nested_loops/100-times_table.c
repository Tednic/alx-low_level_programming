#include "main.h"

/**
  * print_times_table - prints the n times table from o
  * the format of the n times shown in the task will help us to
  * declare 3 additional variables: num, m , and res.
  * the first row and column in the example are all zeros
  * from the format, the num variable starts from o to n
  * the multiplier m, starts from 1 to n
  * multiplying the num var with the multiplier m
  * var gives the result var as res.
  * function to abort if n is greater than 15 or less than 0
  * @n: the number of the multiplication table
  */

void print_times_table(int n)
{
	int num, m, res;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				res = num * m;
				if (res <= 99)
					_putchar(' ');
				if (res <= 9)
					_putchar(' ');

				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10)) % 10 + '0');
				}

				else if (res >= 10 && res <= 99)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
