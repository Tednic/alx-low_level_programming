/*
 * Task: Write a program that performs simple operations
 * Filename: 3-op_functions.c
 * This file should contain the 5 following functions (not more):
 * op_add, op_sub, op_mul, op_div, and op_mod.
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum up two numbers a and b
 * @a: number 1 of integer type
 * @b: number 2 of integer type
 * Return: The sum of numbers a n b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Computes the difference of two numebers a and b
 * @a: number 1 of integer value
 * @b: number 2 of interger value
 * Return: The difference of numbers and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Computes the product of two numebers a and b
 * @a: number 1 of integer type
 * @b: number 2 of integer type
 * Return: The product of numbers a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Computes the division of two numbers a and b
 * @a: number 1 of integer type
 * @b: number 2 of integer type
 * Return: The result of the division of numbers a and b
 */

int op_div(int a, int b)
{
/* if user divides (/) by 0, print Error with \n. Exit with status 100 */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Computes  the remainder of two numbers
 * @a: number 1 of integer type
 * @b: number 2 of integer type
 * Return: The result of the remainder of numbers a and b
 */
int op_mod(int a, int b)
{
/* Print Error with \n. Exit with status 100 if user divide (%) by 0 */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
