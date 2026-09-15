#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2, result;
    int int1, int2;

    do
    {
        printf("\n----- CALCULATOR MENU -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 6)
        {
            if (choice == 5)
            {
                printf("Enter two integers: ");
                scanf("%d %d", &int1, &int2);
            }
            else
            {
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
            }
        }

        switch (choice)
        {
            case 1:
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                if (num2 == 0)
                    printf("Division by zero is not allowed.\n");
                else
                {
                    result = num1 / num2;
                    printf("Result = %.2lf\n", result);
                }
                break;

            case 5:
                if (int2 == 0)
                    printf("Modulus by zero is not allowed.\n");
                else
                    printf("Result = %d\n", int1 % int2);
                break;

            case 6:
                result = pow(num1, num2);
                printf("Result = %.2lf\n", result);
                break;

            case 7:
                printf("Exiting calculator...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 7);

    return 0;
}