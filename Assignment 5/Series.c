#include <stdio.h>

int main()
{
    int n, i, j;
    double x, term, sum = 0;
    double power, factorial;

    printf("Enter value of x: ");
    scanf("%lf", &x);

    printf("Enter value of n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid value of n.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            power = 1;
            factorial = 1;

            for (j = 1; j <= i; j++)
            {
                power = power * x;
                factorial = factorial * j;
            }

            term = power / factorial;

            if (i % 2 == 1)
            {
                sum = sum + term;
            }
            else
            {
                sum = sum - term;
            }
        }

        printf("Sum of the series = %.4lf\n", sum);
    }

    return 0;
}