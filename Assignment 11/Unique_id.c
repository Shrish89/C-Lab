#include <stdio.h>

void generateID() {
    static int id = 1000;
    id++;
    printf("ID = %d\n", id);
}

int main() {
    generateID();
    generateID();
    generateID();

    return 0;
}