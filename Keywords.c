#include <stdio.h>

int main()
{
    int marks;
    float percentage;

    printf("Enter marks out of 100: ");
    scanf("%d", &marks);

    percentage = marks;

    if (marks >= 40)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    printf("Counting from 1 to 5:\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }

    printf("\nPercentage = %.2f%%\n", percentage);

    return 0;
}