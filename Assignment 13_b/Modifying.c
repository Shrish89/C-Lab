#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;
    struct Employee *p;
    float newSalary;

    p = &e;

    printf("Enter employee ID: ");
    scanf("%d", &p->id);

    printf("Enter employee name: ");
    scanf(" %49[^\n]", p->name);

    printf("Enter current salary: ");
    scanf("%f", &p->salary);

    printf("Enter new salary: ");
    scanf("%f", &newSalary);

    p->salary = newSalary;

    printf("Employee ID = %d\n", p->id);
    printf("Employee Name = %s\n", p->name);
    printf("Modified Salary = %.2f\n", p->salary);

    return 0;
}