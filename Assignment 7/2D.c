#include <stdio.h>

int main()
{
    int rows, columns, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int a[rows][columns];

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}