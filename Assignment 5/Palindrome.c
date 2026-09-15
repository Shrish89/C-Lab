#include <stdio.h>

int main()
{
    int num, original, remainder, reverse = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Invalid input.\n");
    }
    else
    {
        original = num;

        while (num > 0)
        {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num = num / 10;
        }

        if (original == reverse)
        {
            printf("%d is a palindrome number.\n", original);
        }
        else
        {
            printf("%d is not a palindrome number.\n", original);
        }
    }

    return 0;
}