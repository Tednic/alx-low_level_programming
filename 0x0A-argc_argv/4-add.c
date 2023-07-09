/*
 * File: 4-add.c
 * Writer: Umoren Oku
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the sum of positive numbers, and \n.
 * @argc: The count of arguments passed to the program.
 * @argv: An array of pointers to the arguments passed.
 * Return: - 1 for non-digit numbers. Otherwise 0.
 */

int main(int argc, char *argv[])
{
	int number, digit, sum = 0;

	for (number = 1; number < argc; number++)
	{
		for (digit = 0; argv[number][digit]; digit++)
		{
			if (argv[number][digit] < '0' || argv[number][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[number]);
	}

	printf("%d\n", sum);

	return (0);
}
