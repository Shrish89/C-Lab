#include <stdio.h>

void separate_elements(int *arr, int n, int *even, int *even_count, int *odd, int *odd_count)
{
    *even_count = 0;
    *odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            *(even + *even_count) = *(arr + i);
            (*even_count)++;
        }
        else
        {
            *(odd + *odd_count) = *(arr + i);
            (*odd_count)++;
        }
    }
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int even_count, odd_count;

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    separate_elements(arr, n, even, &even_count, odd, &odd_count);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEven elements: ");
    for (int i = 0; i < even_count; i++)
        printf("%d ", even[i]);

    printf("\nEven count = %d\n", even_count);

    printf("Odd elements: ");
    for (int i = 0; i < odd_count; i++)
        printf("%d ", odd[i]);

    printf("\nOdd count = %d\n", odd_count);

    return 0;
}