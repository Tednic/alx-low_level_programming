#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first number
 * @m: number n is to be flipped to
 * Return: required number of bits needed for the flipping
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, nflip_bits = 0;
		while (xor > 0)
		{
			nflip_bits = nflip_bits + (xor & 1);
			xor >>= 1;
		}

		return (nflip_bits);
}
