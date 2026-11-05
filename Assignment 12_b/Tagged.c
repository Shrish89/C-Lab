#include <stdio.h>

enum Type {
    INT_VALUE, FLOAT_VALUE, CHAR_VALUE
};

union Data {
    int i;
    float f;
    char c;
};

struct TaggedData {
    enum Type tag;
    union Data value;
};

void printValue(struct TaggedData d) {
    switch (d.tag) {
        case INT_VALUE:
            printf("Integer Value: %d\n", d.value.i);
            break;

        case FLOAT_VALUE:
            printf("Float Value: %.2f\n", d.value.f);
            break;

        case CHAR_VALUE:
            printf("Character Value: %c\n", d.value.c);
            break;
    }
}

int main() {
    struct TaggedData d;
    int choice;

    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Character\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 3) {
        printf("Invalid Choice\n");
        return 0;
    }

    if (choice == 1) {
        d.tag = INT_VALUE;
        printf("Enter Integer: ");
        scanf("%d", &d.value.i);
    }
    else if (choice == 2) {
        d.tag = FLOAT_VALUE;
        printf("Enter Float: ");
        scanf("%f", &d.value.f);
    }
    else {
        d.tag = CHAR_VALUE;
        printf("Enter Character: ");
        scanf(" %c", &d.value.c);
    }

    printValue(d);

    return 0;
}