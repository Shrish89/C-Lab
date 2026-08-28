#include <stdio.h>

int main()
{
    int age;
    float income;
    int creditScore;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income: ");
    scanf("%f", &income);

    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    if (age >= 21 && age <= 60 && income > 35000 && creditScore >= 750)
    {
        printf("\nPerson is eligible for the loan.\n");
    }
    else
    {
        printf("\nPerson is not eligible for the loan.\n");
    }

    return 0;
}