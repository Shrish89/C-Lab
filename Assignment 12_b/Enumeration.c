#include <stdio.h>

enum Day {
    MONDAY = 1, 
    TUESDAY, 
    WEDNESDAY, 
    THURSDAY,
    FRIDAY, 
    SATURDAY, 
    SUNDAY
};

int main() {
    enum Day d;
    int n;

    printf("Enter a day number (1-7): ");
    scanf("%d", &n);

    if (n < 1 || n > 7) {
        printf("Invalid day number\n");
        return 0;
    }

    d = n;

    switch (d) 
    {
        case MONDAY: 
        printf("Monday\n"); 
        break;

        case TUESDAY: 
        printf("Tuesday\n"); 
        break;

        case WEDNESDAY: 
        printf("Wednesday\n"); 
        break;

        case THURSDAY: 
        printf("Thursday\n"); 
        break;

        case FRIDAY: 
        printf("Friday\n"); 
        break;

        case SATURDAY: 
        printf("Saturday\n"); 
        break;

        case SUNDAY: 
        printf("Sunday\n"); 
        break;
    }

    return 0;
}
