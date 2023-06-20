#include <stdio.h>
/**
  * main - putchar() function
  * in addition to goto statement
  * prints all possible combinations of single-digit numbers
  * Numbers are be separated by , and a space
  * Numbers are printed in ascending order
  * No use of any char variable type
  * puchar() functuon is used four rimes only
  * Return: 0
  */

int main(void)
{
	/**
	  * All possible combinations contain nums 0 to 9
	  * comma is has ASCII Code decimal value 0f 032
	  * space has ASCII code decimal value of 044
	  */
	int i;

	for (i = 0; i <= 8; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');

		if (i == 9)
		{
			goto step1;
			goto step4;
		}
	}
step1:
	putchar('0' + i);
step4:
	putchar('\n');

	return (0);
}
