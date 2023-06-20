#include <stdio.h>
/**
  * main - putchar() and goto functions
  * print all single-digit num combinations
  * single-digits from 0 t0 9
  * to be followed by comma and space in ascending order
  * comma and space has ASCII valiue of 044 and 032 respectively
  * Return: 0 for success
  */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + (i % 10));
		if ((i % 10) == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);

}
