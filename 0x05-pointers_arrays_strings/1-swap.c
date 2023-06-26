#include "main.h"

/**
 * swap_int - a fubctiin that swaps the values of two integers a and b
 * @a: integer a
 * @b: integer b
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
