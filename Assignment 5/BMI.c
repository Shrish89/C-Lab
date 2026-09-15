#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in metres: ");
    scanf("%f", &height);

    if (weight <= 0)
    {
        printf("Invalid weight.\n");
    }
    else if (height <= 0)
    {
        printf("Invalid height.\n");
    }
    else
    {
        bmi = weight / (height * height);

        printf("BMI = %.2f\n", bmi);

        if (bmi < 18.5)
        {
            printf("Underweight\n");
        }
        else if (bmi < 25)
        {
            printf("Normal\n");
        }
        else if (bmi < 30)
        {
            printf("Overweight\n");
        }
        else if (bmi < 35)
        {
            printf("Obesity Class I\n");
        }
        else if (bmi < 40)
        {
            printf("Obesity Class II\n");
        }
        else
        {
            printf("Obesity Class III\n");
        }
    }

    return 0;
}