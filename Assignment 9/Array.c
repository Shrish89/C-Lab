#include <stdio.h>

void display(int *arr, int n)
{
    int i;

    printf("Array: ");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void insert(int *arr, int *n, int position, int value)
{
    int i;

    for (i = *n; i > position; i--)
        arr[i] = arr[i - 1];

    arr[position] = value;
    (*n)++;
}

int deleteElement(int *arr, int *n, int position)
{
    int i, deleted;

    deleted = arr[position];

    for (i = position; i < *n - 1; i++)
        arr[i] = arr[i + 1];

    (*n)--;

    return deleted;
}

int main()
{
    int arr[100], n, i;
    int choice, position, value, deleted;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do
    {
        printf("\n1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            display(arr, n);
        }
        else if (choice == 2)
        {
            printf("Enter position (0 to %d): ", n);
            scanf("%d", &position);

            printf("Enter value: ");
            scanf("%d", &value);

            if (position >= 0 && position <= n)
            {
                insert(arr, &n, position, value);
                printf("Element inserted successfully.\n");
            }
            else
            {
                printf("Invalid position.\n");
            }
        }
        else if (choice == 3)
        {
            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                printf("Enter position (0 to %d): ", n - 1);
                scanf("%d", &position);

                if (position >= 0 && position < n)
                {
                    deleted = deleteElement(arr, &n, position);
                    printf("Deleted element = %d\n", deleted);
                }
                else
                {
                    printf("Invalid position.\n");
                }
            }
        }
        else if (choice == 4)
        {
            printf("Program ended.\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}