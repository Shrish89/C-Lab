#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int a, b, result;
    int (*ptr)(int, int);

    ptr = add;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    result = ptr(a, b);

    printf("Sum = %d\n", result);

    return 0;
}