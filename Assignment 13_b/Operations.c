#include <stdio.h>

int strLength(char *str) {
    int length = 0;

    while (*str != '\0' && *str != '\n') {
        length++;
        str++;
    }

    return length;
}

void strCopy(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }

    *destination = '\0';
}

int strCompare(char *str1, char *str2) {
    while (*str1 == *str2 && *str1 != '\0') {
        str1++;
        str2++;
    }

    return *str1 - *str2;
}

int main() {
    char str1[100], str2[100], copied[100];
    int choice;

    printf("1. Find string length\n");
    printf("2. Copy string\n");
    printf("3. Compare strings\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar();

    if (choice == 1) {
        int (*operation)(char *) = strLength;

        printf("Enter a string: ");
        fgets(str1, sizeof(str1), stdin);

        printf("Length = %d\n", operation(str1));
    } else if (choice == 2) {
        void (*operation)(char *, char *) = strCopy;

        printf("Enter a string: ");
        fgets(str1, sizeof(str1), stdin);

        operation(str1, copied);

        printf("Copied string = %s", copied);
    } else if (choice == 3) {
        int (*operation)(char *, char *) = strCompare;

        printf("Enter first string: ");
        fgets(str1, sizeof(str1), stdin);

        printf("Enter second string: ");
        fgets(str2, sizeof(str2), stdin);

        if (operation(str1, str2) == 0)
            printf("Both strings are equal\n");
        else
            printf("Strings are not equal\n");
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}