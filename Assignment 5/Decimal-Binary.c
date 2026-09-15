#include <stdio.h>

int main()
{
    int num, binary = 0, place = 1, remainder;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Invalid input.\n");
    }
    else
    {
        while (num > 0)
        {
            remainder = num % 2;
            binary = binary + remainder * place;
            place = place * 10;
            num = num / 2;
        }

        printf("Binary = %d\n", binary);
    }

    return 0;
}