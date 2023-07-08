#include "main.h"

/**
  * print_chessboard - function prints a chessboard.
  * @a: The points to tge chessbiard to be be printed.
  */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

/* i and j are indices that represent the rows and columns of the array */
