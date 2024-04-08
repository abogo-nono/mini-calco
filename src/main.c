#include "../inc/calco.h"

int main(void)
{
    int num1, num2, result, choice;

    do
    {
        menu(&choice);

        switch (choice)
        {
        case 1:
            get_number(&num1, &num2);
            result = add(num1, num2);
            printf("\n%d + %d = %d\n", num1, num2, result);
            break;

        case 2:
            get_number(&num1, &num2);
            result = subtract(num1, num2);
            printf("\n%d - %d = %d\n", num1, num2, result);
            break;

        case 3:
            get_number(&num1, &num2);
            result = multiply(num1, num2);
            printf("\n%d * %d = %d\n", num1, num2, result);
            break;

        case 4:
            get_number(&num1, &num2);
            result = divide(num1, num2);
            printf("\n%d / %d = %d\n", num1, num2, result);
            break;

        case 5:
            get_number(&num1, &num2);
            result = power(num1, num2);
            printf("\n%d ^ %d = %d\n", num1, num2, result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &num1);
            result = _sqrt(num1);
            printf("the square root of %d is %d\n", num1, result);
            break;

        case 0:
            printf("Bye!\n");
            exit(0);
            break;
        }

    } while (1);

    return 0;
}
