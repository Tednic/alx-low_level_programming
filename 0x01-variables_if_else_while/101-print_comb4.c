#include <stdio.h>
/**
  * main - putchar() function
  * prints all possible different combinations of thre digit
  * Numbers should be printed in ascending order, with two digits
  * Digits a, b, and c creates repeated pattern in output for a nested loop
  * Return: 0 for pass
  */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (a == 7 && b == 8 && c == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
