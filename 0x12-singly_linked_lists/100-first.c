/*
 * Task: Write a function that prints You're beat! and
 * yet, you must allow,\nI bore my house upon my back!\n
 * before the main function is executed.
*/

#include <stdio.h>

/* Define a constructor function */

void myStartupFun(void)__attribute__ ((constructor));

/*
 * The __attribute__ ((constructor)) syntax is a GCC-specific feature
 * that allows you to mark a function as a constructor
 * This means that the function will be executed before the main function
 * of the program, typically during program startup.
 * This can be useful for initializing some global variables or resources
 * that are needed by the program
 */

/*
 * The void keyword indicates that the function does not return any value.
 * The myStartupFun is the name of the function. The (void) indicates that
 * the function does not take any parameters.
 * The __attribute__ ((constructor)) is placed after the function declaration,
 * inside parentheses.
 * The double parentheses are used to distinguish
 * the attribute from a function call
 */

/**
 * myStartupFun - a unction that runs before the main function
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
