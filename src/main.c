#include "../inc/calco.h"

int main(void)
{
    int choice, num1_int, num2_int, result_int;
    float num1_float, num2_float, result_float;

    do
    {
        menu(&choice);

        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1_float, &num2_float);
            result_float = add(num1_float, num2_float);
            printf("The sum of %f and %f is %f\n", num1_float, num2_float, result_float);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1_float, &num2_float);
            result_float = subtract(num1_float, num2_float);
            printf("The difference of %f and %f is %f\n", num1_float, num2_float, result_float);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1_float, &num2_float);
            result_float = multiply(num1_float, num2_float);
            printf("the product of %f and %f is %f\n", num1_float, num2_float, result_float);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1_float, &num2_float);
            result_float = divide(num1_float, num2_float);
            printf("the quotient of %f anf %f is %f\n", num1_float, num2_float, result_float);
            break;

        case 5:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1_int, &num2_int);
            result_int = power(num1_int, num2_int);
            printf("the power of %d and %d is %d\n", num1_int, num2_int, result_int);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &num1_int);
            result_int = _sqrt(num1_int);
            printf("the square root of %d is %d\n", num1_int, result_int);
            break;

        case 0:
            printf("Bye!\n");
            exit(0);
            break;
        }

    } while (1);

    return 0;
}
