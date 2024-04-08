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
float add(float a, float b);

/**
 * sub - subtract two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: difference of @a and @b
 */
float subtract(float a, float b);

/**
 * multiply - multiply two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: product of @a and @b
 */
float multiply(float a, float b);

/**
 * divide - divide two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: quotient of @a and @b
 */
float divide(float a, float b);

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

#endif