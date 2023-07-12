/*
 * File: 100-argstostr.c
 * Task: Write a function that concatenates all the arguments of your program.
 * Function Prototype: char *argstostr(int ac, char **av)
 */

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: the number of strings (arguments) passed to the program
 * @av: array of pointers to the arguments passed to the pragram
 * Return: a pointer to the new string. NULL if ac || av == 0 or failure.
 */

char *argstostr(int ac, char **av)
{
	/*
	 * *str: a pointer to a char string from concatenated arguments passed to the program
	 * i: loop counter for each argument in the array vector
	 * j: loop counter for each character in each of the argument passed
	 * k: keeps track  in array of the position in str 
	 * size: char size
	 */

	char *str;
	int i, j, k, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}

	/* use malloc to allocate memory to str */
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];

		str[k++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
