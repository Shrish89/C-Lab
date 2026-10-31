#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3, avg;
};

int main() {
    struct Student s[100];
    int n, i;
    float max;

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

        printf("Enter Name: ");
        scanf("%49s", s[i].name);

        printf("Enter Marks in Three Subjects: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].avg = (s[i].m1 + s[i].m2 + s[i].m3) / 3;
    }

    max = s[0].avg;

    for (i = 1; i < n; i++) {
        if (s[i].avg > max)
            max = s[i].avg;
    }

    printf("\nStudent(s) with Highest Average:\n");

    for (i = 0; i < n; i++) {
        if (s[i].avg == max) {
            printf("\nRoll Number: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Average: %.2f\n", s[i].avg);
        }
    }

    return 0;
}