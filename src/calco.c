#include "../inc/calco.h"

/**
 * add - add two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: sum of @a and @b
 */
float add(float a, float b)
{
    return a + b;
}

/**
 * sub - subtract two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: difference of @a and @b
 */
float subtract(float a, float b)
{
    return a - b;
}

/**
 * multiply - multiply two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: product of @a and @b
 */
float multiply(float a, float b)
{
    return a * b;
}

/**
 * divide - divide two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: quotient of @a and @b
 */
float divide(float a, float b)
{
    if (b == 0)
    {
        fprintf(stderr, "Division by zero\n");
        exit(1);
    }

    return a / b;
}

/**
 * power - raise a number to a power
 *
 * @a: number to raise
 * @b: power to raise
 *
 * Return: @a raised to the power @b
 */
int power(int a, int b)
{
    int result = 1;

    for (int i = 0; i < b; i++)
    {
        result *= a;
    }

    return result;
}

/**
 * _sqrt - calculate the square root of a number
 *
 * @a: number to calculate the square root of
 *
 * Return: square root of @a
 */
int _sqrt(int a)
{
    if (a >= 0)
        return a;
    return (a * -1);
}