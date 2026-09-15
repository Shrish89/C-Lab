#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (year <= 0)
    {
        printf("Invalid year\n");
    }
    else
    {
        if (month < 1 || month > 12)
        {
            printf("Invalid month\n");
        }
        else
        {
            if (month == 2)
            {
                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                {
                    if (day >= 1 && day <= 29)
                        printf("Valid date\n");
                    else
                        printf("Invalid date\n");
                }
                else
                {
                    if (day >= 1 && day <= 28)
                        printf("Valid date\n");
                    else
                        printf("Invalid date\n");
                }
            }
            else if (month == 4 || month == 6 || month == 9 || month == 11)
            {
                if (day >= 1 && day <= 30)
                    printf("Valid date\n");
                else
                    printf("Invalid date\n");
            }
            else
            {
                if (day >= 1 && day <= 31)
                    printf("Valid date\n");
                else
                    printf("Invalid date\n");
            }
        }
    }

    return 0;
}
