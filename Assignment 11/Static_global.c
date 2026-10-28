#include <stdio.h>

static int x = 50;

void display() {
    printf("Static global variable = %d\n", x);
}

int main() {
    display();

    return 0;
}