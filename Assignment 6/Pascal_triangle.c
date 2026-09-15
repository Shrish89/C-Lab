#include <stdio.h>

int main()
{
    int n, i, j;
    int number;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of rows.\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            number = 1;

            for (j = 0; j <= i; j++)
            {
                printf("%d ", number);

                number = number * (i - j) / (j + 1);
            }

            printf("\n");
        }
    }

    return 0;
}