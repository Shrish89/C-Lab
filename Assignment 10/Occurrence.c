#include <stdio.h>

int findMax(int arr[], int n)
{
    int max;

    if (n == 1)
        return arr[0];

    max = findMax(arr, n - 1);

    if (arr[n - 1] > max)
        return arr[n - 1];

    return max;
}

int countMax(int arr[], int n, int max)
{
    if (n == 0)
        return 0;

    if (arr[n - 1] == max)
        return 1 + countMax(arr, n - 1, max);

    return countMax(arr, n - 1, max);
}

int main()
{
    int arr[100];
    int n, i, max, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = findMax(arr, n);
    count = countMax(arr, n, max);

    printf("Maximum element = %d\n", max);
    printf("Number of occurrences = %d", count);

    return 0;
}