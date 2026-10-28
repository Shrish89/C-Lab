#include <stdio.h>

int x = 10;

void change();

int main() {
    printf("Before = %d\n", x);
    change();
    printf("After = %d\n", x);

    return 0;
}