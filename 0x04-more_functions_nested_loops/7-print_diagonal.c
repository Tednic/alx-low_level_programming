/**
  * print_diagonal - function prints a diagonal line
  *@n : number of backslash \ characters to be printed
  */

#include "main.h"

void print_diagonal(int n)
{
	int slash, space;

	if (n > 0)
	{
		for (slash = 0; slash < n; slash++)
		{
			for (space = 0; space < slash; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (slash == n - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
