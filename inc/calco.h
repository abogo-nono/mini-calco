#ifndef __CALCO_H__
#define __CALCO_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * add - add two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: sum of @a and @b
 */
int add(int a, int b);

/**
 * sub - subtract two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: difference of @a and @b
 */
int subtract(int a, int b);

/**
 * multiply - multiply two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: product of @a and @b
 */
int multiply(int a, int b);

/**
 * divide - divide two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: quotient of @a and @b
 */
int divide(int a, int b);

/**
 * power - raise a number to a power
 *
 * @a: number to raise
 * @b: power to raise
 *
 * Return: @a raised to the power @b
 */
int power(int a, int b);

/**
 * _sqrt - calculate the square root of a number
 *
 * @a: number to calculate the square root of
 *
 * Return: square root of @a
 */
int _sqrt(int a);

/**
 * menu - print the menu
 *
 * @choice: user's choice
 *
 * Return: the choosen option
 */
void menu(int *choice);

/**
 * get_number - get two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: two numbers
 */
void get_number(int *a, int *b);

#endif