#include <unistd.h>
/**
  * main - C Program to print a comment
  * Don't use any functions in man (3) printf or man (3) puts
  * followed by a new line, to the standard error(stderr)
  * program should return 1
  * program should compile without any warnings when using the -Wall gcc option
  * Return: 1
  */

int main(void)
{
	/**
	  *2 is the default file descriptor for stderr
	  * 59 is the size of string to be printed
	  */

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

