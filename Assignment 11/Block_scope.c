#include <stdio.h>

int x = 10;

int main() {
    printf("Global x = %d\n", x);

    {
        int x = 20;
        printf("Local x = %d\n", x);
    }

    printf("Global x = %d\n", x);

    return 0;
}