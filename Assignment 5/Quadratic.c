#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double discriminant;
    double root1, root2;

    printf("Enter coefficient a: ");
    scanf("%lf", &a);

    printf("Enter coefficient b: ");
    scanf("%lf", &b);

    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    if (a == 0)
    {
        printf("Invalid quadratic equation. a cannot be 0.\n");
    }
    else
    {
        discriminant = (b * b) - (4 * a * c);

        printf("Discriminant = %.2lf\n", discriminant);

        if (discriminant > 0)
        {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Roots are real and distinct.\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
        }
        else if (discriminant == 0)
        {
            root1 = -b / (2 * a);

            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2lf\n", root1);
        }
        else
        {
            printf("Roots are imaginary.\n");
        }
    }

    return 0;
}