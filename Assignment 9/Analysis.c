#include <stdio.h>

void findElements(int *arr, int n, int *smallest, int *secondSmallest,
                  int *greatest, int *secondGreatest, int *distinct)
{
    int i;
    int s = arr[0], ss = 0;
    int g = arr[0], sg = 0;
    int hasSecond = 0;

    for (i = 1; i < n; i++)
    {
        if (arr[i] < s)
            s = arr[i];

        if (arr[i] > g)
            g = arr[i];
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > s)
        {
            if (!hasSecond || arr[i] < ss)
            {
                ss = arr[i];
                hasSecond = 1;
            }
        }
    }

    hasSecond = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] < g)
        {
            if (!hasSecond || arr[i] > sg)
            {
                sg = arr[i];
                hasSecond = 1;
            }
        }
    }

    *smallest = s;
    *greatest = g;

    if (ss != 0 || s != 0)
        *secondSmallest = ss;
    else
        *secondSmallest = ss;

    if (sg != 0 || g != 0)
        *secondGreatest = sg;
    else
        *secondGreatest = sg;

    if (s == g)
        *distinct = 1;
    else
        *distinct = 2;
}

int main()
{
    int arr[100], n, i;
    int smallest, secondSmallest;
    int greatest, secondGreatest;
    int distinct;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findElements(arr, n, &smallest, &secondSmallest,
                 &greatest, &secondGreatest, &distinct);

    printf("Smallest = %d\n", smallest);
    printf("Greatest = %d\n", greatest);

    if (distinct < 2)
    {
        printf("Fewer than two distinct values exist.\n");
    }
    else
    {
        printf("Second Smallest = %d\n", secondSmallest);
        printf("Second Greatest = %d\n", secondGreatest);
    }

    return 0;
}