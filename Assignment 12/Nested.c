#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining;
};

int main() {
    struct Employee e[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter Details of Employee %d\n", i + 1);

        printf("Enter Employee Name: ");
        scanf("%49s", e[i].name);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);

        printf("Enter Date of Joining (DD MM YYYY): ");
        scanf("%d %d %d", &e[i].joining.day,
              &e[i].joining.month, &e[i].joining.year);
    }

    printf("\nEmployee Records\n");

    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("ID: %d\n", e[i].id);
        printf("Salary: %.2f\n", e[i].salary);
        printf("Date of Joining: %02d/%02d/%d\n",
               e[i].joining.day, e[i].joining.month,
               e[i].joining.year);
    }

    return 0;
}