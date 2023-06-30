#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: an array of integers
  * @n: the number of elements to swap
  * an auxiliary array having same size and type as the input array is created
  * with contents of the elements of the input array backward,
  * copy the content of the auxiliary array into the original one.
  */

void reverse_array(int *a, int n)
{
	int temp[666];

	int i = 0;

	for (i = 0; i < n; i++)
		temp[n - 1 - i] = a[i];

	for (i = 0; i < n; i++)
		a[i] = temp[i];
}
