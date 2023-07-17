/*
 * Task: Write a program that prints the name of the file...
 * ...it was compiled from, followed by a new line.
 * File: 2-main.c
 */

/**
 * main - the main function prints the name of this program file
 * Return: 0 ( Succes)
 */

#include <stdio.h>

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
