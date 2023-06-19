#include <stdio.h>

/**
  * main - putchar() function
  * To print alphabet in lowercase
  * Return: 0 for success else 1 for error
  */
int main(void)
{
	char chr = 'a';

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}

