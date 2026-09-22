#include <stdio.h>

int main()
{
    int n, i, j;
    int symmetric = 1;
    int skewSymmetric = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int a[n][n], transpose[n][n];

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            transpose[i][j] = a[j][i];
        }
    }

    printf("Transpose matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != transpose[i][j])
            {
                symmetric = 0;
            }

            if(a[i][j] != -transpose[i][j])
            {
                skewSymmetric = 0;
            }
        }
    }

    if(symmetric)
    {
        printf("Matrix is symmetric.");
    }
    else if(skewSymmetric)
    {
        printf("Matrix is skew-symmetric.");
    }
    else
    {
        printf("Matrix is neither symmetric nor skew-symmetric.");
    }

    return 0;
}