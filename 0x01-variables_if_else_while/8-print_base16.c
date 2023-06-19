/**
  * main - putchar() function
  * to print all Hexadecimal numbers in lowercase
  * Hex digits are 0 to 9 and letters A to F
  * The letters A through F represent 10 through 15, respectively
 *Return: 0 represents sucess
 */

#include <stdio.h>

int main(void)
{
	int i;
	char Hex;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (Hex = 'a'; Hex <= 'f'; Hex++)
	{
		putchar(Hex);
	}
	putchar('\n');
	return (0);
}
