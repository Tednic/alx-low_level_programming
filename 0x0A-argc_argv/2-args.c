/*
 * File: 2-args.c
 * Writer: Oku Umoren
 */

#include <stdio.h>

/**
 * main - Program prints every arguments passed to it.
 * @argc: The count of arguments passed to the program.
 * @argv: An array of pointers to the arguments passed.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
