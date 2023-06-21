#include <stdio.h>
/**
  * main - putchar() function
  * prints all possible diff comb of two two digit numbers
  * Numbers should be printed in ascending order, with two digits
  * Digits a and b repeated pattern indicates a nested loop
  * a two digit number consists of two place values: tens and unit
  * i.e, a quotient and a remainder for the tens and unit value respectively
  * hence the use of both / and % in the code
  * Return: 0 for pass
  */

int main(void)
{
	int a, b;

	for (a = 0; a < 99; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 98 && b == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
