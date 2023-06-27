#include "main.h"

/**
 * print_alphabet_x10 - prints letters of the alphabet in lowercase 10 times,
 * in addition to a new line.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int num_of_times = 1;

	while (num_of_times++ <= 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
	}
}
