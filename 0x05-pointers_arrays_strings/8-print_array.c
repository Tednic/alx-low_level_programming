#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * using the Prototype as void print_array(int *a, int n);
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers must be displayed in the same order as stored in the array
 * You are allowed to use printf
 * @a: name of array
 * @n: number of array elements to be printed
 * Return: input a and n
 */

void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < (n - 1); p++)
	{
		printf("%d, ", a[p]);
	}
	if (p == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
