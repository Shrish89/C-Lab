#include <stdio.h>

int main()
{
    int n, i, j;
    int number = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of rows.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", number);
                number++;
            }

            printf("\n");
        }
    }

    return 0;
}