#include <stdio.h>

enum Result {
    FAIL, PASS, DISTINCTION
};

enum Result getResult(float avg) {
    if (avg >= 75)
        return DISTINCTION;
    else if (avg >= 40)
        return PASS;
    else
        return FAIL;
}

int main() {
    float m1, m2, m3, avg;
    enum Result r;

    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3;

    r = getResult(avg);

    printf("Average: %.2f\n", avg);

    switch (r) {
        case FAIL:
            printf("Result: FAIL\n");
            break;
        case PASS:
            printf("Result: PASS\n");
            break;
        case DISTINCTION:
            printf("Result: DISTINCTION\n");
            break;
    }

    printf("Numeric Value: %d\n", r);

    return 0;
}