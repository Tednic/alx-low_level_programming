#include "main.h"

/**
 * _pow_recursion - function returns a value when x is raised to power y
 * @x: the base of the mathematical expression
 * @y: the exponent of the expression
 * Return: an integer.
 */

int _pow_recursion(int x, int y)
{
	int result_value;

	if (y == 0)
	return (1);

	else if (y < 0)
	return (-1);

	else
	{
		result_value = x *_pow_recursion(x, (y - 1));
	}
	return (result_value);
}

/**
 * Function - x raised to power y multiplirs itself y times.
 * The base case and repetitive case of the function are:
 * Base case: (y == 0)
 * Repetitive case: _pow_recursion(x, (y - 1))
 */
