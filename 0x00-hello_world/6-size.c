#include <stdio.h>
/**
 * main - C Program
 * C Program To Display The Size of Different Data Types
 * Using the format specifier %lu for Long Unsigned Data Type
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
