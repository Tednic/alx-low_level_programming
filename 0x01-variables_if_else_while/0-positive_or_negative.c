#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Variable number input
  * program to determine if the number is positive or negative
  * Return: 0 for succes
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	if (n == 0)
	{
		printf("%d is zero\n", 0);
	}

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
