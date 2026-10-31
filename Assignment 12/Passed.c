#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3;
    char grade;
};

void displayStudent(struct Student s) {
    printf("\nRoll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Grade: %c\n", s.grade);
}

float totalMarks(struct Student s) {
    return s.m1 + s.m2 + s.m3;
}

void updateGrade(struct Student *s, char newGrade) {
    s->grade = newGrade;
}

int main() {
    struct Student s;
    char newGrade;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%49s", s.name);

    printf("Enter Marks in Three Subjects: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    printf("Enter Current Grade: ");
    scanf(" %c", &s.grade);

    printf("\nStudent Details:\n");
    displayStudent(s);

    printf("Total Marks: %.2f\n", totalMarks(s));

    printf("\nEnter New Grade: ");
    scanf(" %c", &newGrade);

    updateGrade(&s, newGrade);

    printf("\nUpdated Student Details:\n");
    displayStudent(s);

    return 0;
}