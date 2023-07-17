#ifndef ABSFUNCTION_LIKE_MACRO_H 
#define ABSFUNCTION_LIKE_MACRO_H 

/* 
 * Task: Write a function-like macro ABS(x) that computes the abs value of number x
 * Filename: 3-function_like_macro.h 
 * File Description: A header file that defines the function-like macro
 */

/* This is implemented using a Parameterized Macro */

#define ABS(x) ((x < 0) ? (-x) : (x)) 

#endif
