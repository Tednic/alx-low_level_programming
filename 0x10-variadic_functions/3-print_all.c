/*
 * Task: Write a function that prints anything.
 * Prototype: void print_all(const char * const format, ...)
 * where format is a list of types of arguments passed to the function
 * These are c for char, i for integer, f for float and s for char*
 * if the string s is NULL, print (nil) else ignore other char
 */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * print_all - a function that prints anything
  * @format: a list of types of arguments passed to the function.
  * The tpes of arguments are c, i, f, s
  */

void print_all(const char * const format, ...)
{
	char *str;
	va_list a_list;
	int flag;
	int i;

	i = 0;
	va_start(a_list, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (flag == 0 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
