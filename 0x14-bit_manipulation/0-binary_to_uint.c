#include "main.h"

/**
 * binary_to_uint - converters a binary number to unsigned integer
 * @b: points to a string of 0 and 1 chars
 * Return: The converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int base;
	unsigned int i;
	unsigned int j;
	unsigned int sum;
	unsigned int len;
	unsigned int expn;

	base = 2;
	sum = 0;
	expn = 1;
	if (b == NULL)
		return (0);
	/* Loops to obtain string length of b containing 0 and 1 */
	for (len = 0; b[len] != '\0'; len++)
		;
	/* checks for a single number */
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return ((b[0] - 48));
	for (i = 0; b[i] != '\0'; i++) /* Iterates through the string */
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = len - 1; j > 0; j--) /*Computes the exponent*/
			expn = expn * base;
		sum = sum + (expn * (b[i] - 48)); /* sums up the numbers */
		len--;
		expn = 1 /* Resets the exponent */;
	}
	return (sum);
}
