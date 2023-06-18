#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Random number generator
  * the program prints the last digit of the random number
  * given certain conditions in IF statement
  * Return: 0 for successful program run
  */

int main(void)
{
	int n, l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Let's find the last digit (l_digit) number for n*/
	l_digit = n % 10;
		if (l_digit > 5)
		{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
		}

		if (l_digit == 0)
		{
		printf("Last digit of %d is %d and is 0\n", n, l_digit);
		}

		if (l_digit < 6 && l_digit != 0)
		{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);
		}
	return (0);
}
