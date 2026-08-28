#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Arithmetic Operations ---\n");

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);

    if (b != 0)
    {
        printf("Division = %.2f\n", (float)a / b);
        printf("Modulus = %d\n", a % b);
    }
    else
    {
        printf("Division and modulus by zero are not possible.\n");
    }

    printf("\n--- Mathematical Operations ---\n");

    printf("Power = %.2f\n", pow(a, b));

    if (a >= 0)
    {
        printf("Square root of %d = %.2f\n", a, sqrt(a));
    }
    else
    {
        printf("Square root of negative number is not possible.\n");
    }

    printf("Absolute value of %d = %d\n", a, abs(a));

    printf("Floor value of %d = %.2f\n", a, floor(a));
    printf("Ceiling value of %d = %.2f\n", a, ceil(a));

    return 0;
}