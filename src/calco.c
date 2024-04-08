#include "../inc/calco.h"

/**
 * add - add two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: sum of @a and @b
 */
int add(int a, int b)
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
int subtract(int a, int b)
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
int multiply(int a, int b)
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
int divide(int a, int b)
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

/**
 * menu - print the menu
 *
 * @choice: user's choice
 *
 * Return: the choosen option
 */
void menu(int *choice)
{
    int option;

    printf("Welcome to MiniCalco!\n\n");
    printf("Choose an operation:\n");
    printf("  1. Addition\n");
    printf("  2. Subtraction\n");
    printf("  3. Division\n");
    printf("  4. Multiplication\n");
    printf("  5. Power\n");
    printf("  6. Square\n");
    printf("  0. Exit\n");

    do
    {
        printf("\nEnter your choice? ");
        scanf("%d", &option);
    } while (option > 6 || option < 0);

    *choice = option;
}


void get_number(int *a, int *b)
{
    printf("Enter the first number: ");
    scanf("%d", a);

    printf("Enter the second number: ");
    scanf("%d", b);
}
