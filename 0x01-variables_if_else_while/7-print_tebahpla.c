#include <stdio.h>

/**
  * main - putchar() function
  * To print alphabet in lowercase in reverse
  * Return: 0 for success else 1 for error
  */
int main(void)
{
	char chr = 'z';

	/**
	  * putchar refences ASCII value. z is 122 and a is 097
	  * the output will be in descending order from 122, 121, ....., 098, 097
	  */

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}

