#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 25;
    printf("Integer Value: %d\n", d.i);

    d.f = 7.5f;
    printf("Float Value: %.2f\n", d.f);

    d.c = 'A';
    printf("Character Value: %c\n", d.c);

    printf("Size of Union: %zu bytes\n", sizeof(d));

    return 0;
}