/*
 * File: 1-args.c
 * Writer: Oku Umoren
 */

#include <stdio.h>

/**
 * main - program prints the count of arguments passed to it.
 * @argc: The count of arguments passed to the program.
 * @argv: An array of pointers to the arguments passed to the program.
 * Return: Always 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
