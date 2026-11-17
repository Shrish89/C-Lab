#include <stdio.h>

int main() {
    int a[10][10], rows, cols, i, j;
    int (*p)[10] = a;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            scanf("%d", &p[i][j]);
    }

    printf("Transpose of matrix:\n");
    for (j = 0; j < cols; j++) {
        for (i = 0; i < rows; i++)
            printf("%d ", p[i][j]);

        printf("\n");
    }

    return 0;
}