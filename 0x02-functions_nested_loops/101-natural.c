/*
 * Task: Write a program that computes and prints the sum of all the...
 * multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 * File: 101-natural.c
 */

#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples..
 * ...of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int sum_3, sum_5, sum;

	int i;

	sum_3 = 0;
	sum_5 = 0;
	sum = 0;

/* i iterates from 0 to 1024 (excluded) */

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum_3 = sum_3 + i;
		}

		else if ((i % 5) == 0)
		{
			sum_5 = sum_5 + i;
		}
	}

	sum = sum_3 + sum_5;

	printf("%lu\n", sum);

	return (0);
}
