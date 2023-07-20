/*
 * Task: Write a program that multiplies two positive numbers
 * File: 101-mul.c
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits.
 * If not, print Error, followed by a new line, and exit with a status of 98
 * You are allowed to use more than 5 functions in your file
 */

#include "main.h"
#include "stdlib.h"
#include "stdio.h"

int get_length(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 *
 *
 *
 *
 */


