#include <stdio.h>

void test() {
    int a = 0;
    static int b = 0;

    a++;
    b++;

    printf("Automatic = %d, Static = %d\n", a, b);
}

int main() {
    test();
    test();
    test();

    return 0;
}