#include <stdio.h>

int main()
{
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of terms.\n");
    }
    else
    {
        printf("Fibonacci sequence: ");

        for (i = 1; i <= n; i++)
        {
            printf("%d ", first);

            next = first + second;
            first = second;
            second = next;
        }

        printf("\n");
    }

    return 0;
}