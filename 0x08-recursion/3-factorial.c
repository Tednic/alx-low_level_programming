#include "main.h"

/**
 * factorial - function to compute the factorial of a given number
 * @n: the given number whose factorial is to be computed.
 * Return: an integer.
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	return (1);
	else if (n < 0)
	return (-1);
	else
	{
		return (n * factorial(n - 1));
	}
}

/**
 * The factotial of a non-negative integer, n, is the product of
 * all non-negative integers less than or equal to n.
 *(n==1): the base case for recursive function "factorial(int n)"
 * factorial(n-1) is the repetitive case
 */
