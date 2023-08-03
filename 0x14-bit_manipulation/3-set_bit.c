#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index.
 * @n: a pointer to a number;
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitmask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	bitmask = 1;
	bitmask = bitmask << index;
	*n = ((*n) | bitmask);
	return (1);
}
