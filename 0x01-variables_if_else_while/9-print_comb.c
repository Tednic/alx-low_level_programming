#include <stdio.h>
/**
  * main - putchar() and goto functions
  * print all single-digit num combinations
  * single-diguts from 0 t0 9
  * to be followed by comma and space in ascending order
  * comma and space has ASCII valiue of 044 and 032 respectively
  * Return: 0 for success
  */

int main(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
		if (i == 9)
		{
			goto step1;
			goto step2;
		}
	}
step1:
	putchar('0' + i);
step2:
	putchar('\n');
	return (0);

}
