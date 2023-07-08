#include "main.h"

/**
  * print_diagsums - prints the sum of the two diagonalsof
  * a square matrix of integers.
  * @a: matrux containing integers
  * @size: The size of the integer matrix
  * i: represents tge index for each matrux element
  */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
