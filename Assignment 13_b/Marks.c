#include <stdio.h>

struct Student {
    float marks[3];
};

int main() {
    struct Student s;
    struct Student *p;
    float total = 0, average;
    char grade;
    int i;

    p = &s;

    printf("Enter marks in three subjects: ");
    for (i = 0; i < 3; i++)
        scanf("%f", &p->marks[i]);

    for (i = 0; i < 3; i++)
        total += p->marks[i];

    average = total / 3.0;

    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Grade = %c\n", grade);

    return 0;
}