#include <stdio.h>
/**
  * main - putchar() function
  * prints all single digit numbers of base 10 starting from 0
  * Return: 0
  */
int main(void)
{
	/**
	  *Single digits num of bass 10 starts from 0 to 9
	   */
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
