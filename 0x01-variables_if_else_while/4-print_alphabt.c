#include <stdio.h>
/**
 * main - putchar() function
 * print letters of alphabets in lowercase without letters q and e
 * Return: 0 is success
 */

int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt == 'q' || alphabt == 'e')
		continue;
		putchar(alphabt);
	}
	putchar('\n');
	return (0);
}
