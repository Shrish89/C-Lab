#include <stdio.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
};

int main() {
    enum MenuChoice choice;
    float a, b, result;

    while (1) {
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", (int *)&choice);

        if (choice == EXIT) {
            printf("Calculator Closed\n");
            break;
        }

        if (choice < ADD || choice > DIVIDE) {
            printf("Invalid Choice\n");
            continue;
        }

        printf("Enter Two Numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice) {
            case ADD:
                result = a + b;
                printf("Result: %.2f\n", result);
                break;

            case SUBTRACT:
                result = a - b;
                printf("Result: %.2f\n", result);
                break;

            case MULTIPLY:
                result = a * b;
                printf("Result: %.2f\n", result);
                break;

            case DIVIDE:
                if (b == 0)
                    printf("Division by Zero Not Allowed\n");
                else {
                    result = a / b;
                    printf("Result: %.2f\n", result);
                }
                break;
        }
    }

    return 0;
}