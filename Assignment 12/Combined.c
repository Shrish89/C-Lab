#include <stdio.h>

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    int roll;
    char name[50];
    float cgpa;
    Date dob;
} Student;

void display(Student *s) {
    printf("\nRoll Number: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("CGPA: %.2f\n", s->cgpa);
    printf("Date of Birth: %02d/%02d/%d\n",
           s->dob.day, s->dob.month, s->dob.year);

    if (s->cgpa >= 8.5)
        printf("Scholarship: Eligible\n");
    else
        printf("Scholarship: Not Eligible\n");
}

int main() {
    Student s[100];
    int n, i;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid Number of Students\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter Details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Student Name: ");
        scanf("%49s", s[i].name);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);

        printf("Enter Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &s[i].dob.day,
              &s[i].dob.month, &s[i].dob.year);
    }

    printf("\nStudent Records\n");

    for (i = 0; i < n; i++) {
        display(&s[i]);
    }

    return 0;
}