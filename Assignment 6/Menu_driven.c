#include <stdio.h>

int main()
{
    int choice, num;
    int original, remainder, reverse;
    int i, isPrime, sum, digits, temp;
    int armstrongSum;

    do
    {
        printf("\n----- NUMBER OPERATIONS MENU -----\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits of an integer\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &num);

                original = num;
                reverse = 0;

                if (num < 0)
                {
                    printf("Negative numbers are not considered palindrome here.\n");
                }
                else
                {
                    while (num > 0)
                    {
                        remainder = num % 10;
                        reverse = reverse * 10 + remainder;
                        num = num / 10;
                    }

                    if (original == reverse)
                        printf("%d is a palindrome number.\n", original);
                    else
                        printf("%d is not a palindrome number.\n", original);
                }
                break;

            case 2:
                printf("Enter an integer: ");
                scanf("%d", &num);

                if (num < 0)
                {
                    printf("Invalid input.\n");
                }
                else
                {
                    original = num;
                    temp = num;
                    armstrongSum = 0;

                    while (temp > 0)
                    {
                        remainder = temp % 10;
                        armstrongSum = armstrongSum + remainder * remainder * remainder;
                        temp = temp / 10;
                    }

                    if (original == armstrongSum)
                        printf("%d is an Armstrong number.\n", original);
                    else
                        printf("%d is not an Armstrong number.\n", original);
                }
                break;

            case 3:
                printf("Enter an integer: ");
                scanf("%d", &num);

                if (num < 2)
                {
                    isPrime = 0;
                }
                else
                {
                    isPrime = 1;

                    for (i = 2; i < num; i++)
                    {
                        if (num % i == 0)
                        {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime == 1)
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);

                break;

            case 4:
                printf("Enter an integer: ");
                scanf("%d", &num);

                if (num < 0)
                    num = -num;

                sum = 0;

                while (num > 0)
                {
                    remainder = num % 10;
                    sum = sum + remainder;
                    num = num / 10;
                }

                printf("Sum of digits = %d\n", sum);
                break;

            case 5:
                printf("Enter an integer: ");
                scanf("%d", &num);

                if (num < 0)
                    num = -num;

                if (num == 0)
                {
                    digits = 1;
                }
                else
                {
                    digits = 0;

                    while (num > 0)
                    {
                        digits++;
                        num = num / 10;
                    }
                }

                printf("Number of digits = %d\n", digits);
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}