/*
 * File: 9-fizz_buzz.c
 * Written By: Umoren Oku
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 1-100.
 * print Fizz and Buzz for multiples of 3 and 5 respectively.
 * Print FizzBuzz for multiples of both 3 and 5.
 * Return: Always 0.
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3) == 0 && (number % 5) == 0)
			printf("FizzBuzz");

		else if ((number % 3) == 0)
			printf("Fizz");

		else if ((number % 5) == 0)
			printf("Buzz");

		else
			printf("%d", number);

		if (number == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
