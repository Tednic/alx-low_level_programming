#ifndef CALC_H
#define CALC_H

/*
 * Task: Write a program that performs simple operations
 * using these operators: +, -, *, /, and %.
 * Usage: calc num1 operator num2
 * Filename: 3-calc.h
 * This file contains all the function prototypes and
 * data structures used by the program.
 * You can use this structure below:
 */

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function pointer associated with the operations
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
