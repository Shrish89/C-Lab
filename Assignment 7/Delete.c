#include <stdio.h>

int main()
{
    int a[100], n, i, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &position);

    if(position < 1 || position > n)
    {
        printf("Invalid position.");
    }
    else
    {
        for(i = position - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;

        printf("Updated array: ");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}