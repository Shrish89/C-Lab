#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3;
};

int main() {
    struct Student s;
    float total, avg;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%49s", s.name);

    printf("Enter Marks in Three Subjects: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    total = s.m1 + s.m2 + s.m3;
    avg = total / 3;

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", avg);

    if (avg >= 90)
        printf("Grade: A\n");
    else if (avg >= 75)
        printf("Grade: B\n");
    else if (avg >= 60)
        printf("Grade: C\n");
    else if (avg >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}
