#include <stdio.h>
/**
  * main - putchar() function
  * Use putchar thrice to print alphabet in lowercase and then uppercase
  * Return: 0 for success else 1 for error
  */
int main(void)
{
	char alphab = 'a';
	char Alphab = 'A';

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		putchar(alphab);
	}
	for (Alphab = 'A'; Alphab <= 'Z'; Alphab++)
	{
		putchar(Alphab);
	}
	putchar('\n');
	return (0);
}
