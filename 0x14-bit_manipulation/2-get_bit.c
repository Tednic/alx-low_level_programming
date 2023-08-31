#include "main.h"
#include <stdio.h>

/**
 * get_bit - function returns the value of a bit at a given index
 * @n: number to whose value of bit is to be checked
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(8) * 8))
		return (-1);
	/* Use i to iterate the number to the right index */
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
