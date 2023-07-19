#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - performs the addition of a and b
 * @a: number 1
 * @b: number 2
 * Return: the sum of ad b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs the substraction of a and b
 * @a: number 1
 * @b: number 2
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs the multiplication of a and b
 * @a: number 1
 * @b: number 2
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs the division of a and b
 * @a: number 1
 * @b: number 2
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - performs the division of a and b
 * @a: number 1
 * @b: number 2
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
