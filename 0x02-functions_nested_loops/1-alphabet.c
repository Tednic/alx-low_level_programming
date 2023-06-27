#include "main.h"

/**
 * print_alphabet - prints letters of the alphabet in lowercase,
 * in addition to a new line.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
