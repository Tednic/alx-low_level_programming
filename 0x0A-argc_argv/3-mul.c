/*
 * File: 3-mul.c
 * Writer: Umoren Oku
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of two intwger numbers, with \n.
 * @argc: The count of arguments passed to this program.
 * @argv: An array of pointers to the arguments passed to the program.
 * Return: 0 for two arguments passed. -1 if the argument count isn't two
 */

int main(int argc, char *argv[])
{
	int multiplicand, multiplier, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* The atoi() function converts a character string to an integer value */

	multiplicand = atoi(argv[1]);
	multiplier = atoi(argv[2]);
	product = multiplicand * multiplier;

	printf("%d\n", product);

	return (0);
}
