#include <stdio.h>

union Number {
    int i;
    float f;
};

int main() {
    union Number n[3];
    int i;

    printf("Enter Three Integer Values:\n");

    for (i = 0; i < 3; i++) {
        printf("Enter Value %d: ", i + 1);
        scanf("%d", &n[i].i);
    }

    printf("\nInteger Values:\n");

    for (i = 0; i < 3; i++) {
        printf("Element %d: %d\n", i + 1, n[i].i);
    }

    printf("\nEnter Floating Point Value to Replace Second Element: ");
    scanf("%f", &n[1].f);

    printf("\nAfter Overwriting Second Element:\n");
    printf("First Element: %d\n", n[0].i);
    printf("Second Element: %.2f\n", n[1].f);
    printf("Third Element: %d\n", n[2].i);

    return 0;
}