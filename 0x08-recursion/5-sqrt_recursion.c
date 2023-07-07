#include "main.h"

/**
 * sqrt_guess - the test function with guessed input parameters
 * @k: the next suppose number whose root is gueesed as @g.
 * @g: the guessed root of n that is not fractional
 * Return: an integer or -1 if no natural square root
 */

int sqrt_guess(int k, int g);

int sqrt_guess(int k, int g)
{
	if (k == (g * g))
	return (g);

	else if (g == (k / 2))
	return (-1);

	else
	{
	return (sqrt_guess(k, g + 1));
	}
}

/**
  * _sqrt_recursion - function to compute square root of natural numbers
  * @n: the natural number whose root is to be computed
  * Return: an integer or -1 for @n < 0
  */

int _sqrt_recursion(int n);

int _sqrt_recursion(int n)
{
	int g = 0;

	if (n < 0)
	return (-1);

	else if (n == 1)
	return (1);

	else
	{
	return (sqrt_guess(n, g));
	}
}

/**
 * The base case and repetitive case of the function are - below
 * Base case: (1 == n)
 * Repetitive case: (_sqrt_guess(n, g));
 */
