/*
 * File: 100-prime_factor.c
 * Writen By: Umoren Oku
 */

#include <stdio.h>

/**
 * main - Search and print the highest prime
 *        factor of this number 612852475143.
 * Return: Always 0.
 */

int main(void)
{
	long prime_num = 612852475143, div;

	while (div < (prime_num / 2))
	{
		if ((prime_num % 2) == 0)
		{
			prime_num /= 2;
			continue;
		}

		for (div = 3; div < (prime_num / 2); div += 2)
		{
			if ((prime_num % div) == 0)
				prime_num /= div;
		}
	}

	printf("%ld\n", prime_num);

	return (0);
}
