#include <stdio.h>

int main() {
    {
        auto int x = 10;
        printf("%d\n", x);
    }

    {
        auto int x = 20;
        printf("%d\n", x);
    }

    return 0;
}
