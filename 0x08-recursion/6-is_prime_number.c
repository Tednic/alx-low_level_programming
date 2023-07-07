#include "main.h"

int is_divisible(int k, int div);
int is_prime_number(int n);

/**
  * is_divisible - function confirms if number k is divisible.
  * @k: The number checked if it is divisible.
  * @div: The divisor.
  * Return: 0 for a divisible number or - 1 otherwise.
  */

int is_divisible(int k, int div)
{
	if (k % div == 0)
	return (0);

	else if (div == k / 2)
	return (1);

	else
	return (is_divisible(k, div + 1));
}

/**
  * is_prime_number - function confirms a prime number.
  * @n: The number to be determined if it is a prime number.
  * Return: 1 if number is prime and 0 otherwise..
  */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	return (0);

	else if (n <= 3 && n >= 2)
	return (1);

	else
	return (is_divisible(n, div));
}
