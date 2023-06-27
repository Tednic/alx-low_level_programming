#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
  * main - random valid password generator for program 101-crack
  * don't use the standard library
  * passing the betty-style tests is optional
  * adopt the betty-doc
  * man srand, rand, time
  * gdb and objdump can help
  *Return: 0 for success and 1 for error
  */

int main(void)
{
	int passkey_gen[100], i, sum, n;

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passkey_gen[i] = rand() % 78;
		sum += (passkey_gen[i] + '0');
		putchar(passkey_gen[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
