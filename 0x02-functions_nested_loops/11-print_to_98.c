#include "main.h"

/**
  * print_to_98 - this function prints all natural numbers from n to 98,
  * and a new line.
  * @n: a natural number
  * Numbers must be separated by a comma and  a space respectively
  * Numbers should be printed in order
  * The first printed number should be the number passed to your function
  * The last printed number should be 98
  * You can use the standard library
  */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
