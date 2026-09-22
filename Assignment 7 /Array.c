#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Array elements are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    average = (float)sum / n;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", average);

    return 0;
}
