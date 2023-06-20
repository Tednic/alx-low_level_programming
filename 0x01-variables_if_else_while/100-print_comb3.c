#include <stdio.h>
/**
  * main - putchar() function
  * prints all possible different combinations of two digit
  * Numbers should be printed in ascending order, with two digits
  * Digits a and b creates repeated pattern in output for a nested loop
  * Return: 0 for pass
  */

int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a == 8 && b == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
