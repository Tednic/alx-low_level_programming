/*
 * Task: Write a function that prints strings, followed by a new line 
 * Prototype: void print_strings(const char *separator, const unsigned int n, ...)
 *where separator is the string to be printed between the strings
 * If separator is NULL, don’t print it
 * one of the string is NULL, print (nil) instead
 */

#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - function that prints strings, followed by a new line
  * @separator: the string to be printed between the strings
  * @n: the number of strings passed to the function
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list a_list;

	va_start(a_list, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(a_list, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
