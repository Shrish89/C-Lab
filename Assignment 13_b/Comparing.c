#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char *p, *q;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    p = str1;
    q = str2;

    while (*p == *q && *p != '\0' && *p != '\n') {
        p++;
        q++;
    }

    if ((*p == '\n' || *p == '\0') &&
        (*q == '\n' || *q == '\0')) {
        printf("Both strings are equal\n");
    } else if (*p > *q) {
        printf("First string is greater\n");
    } else {
        printf("Second string is greater\n");
    }

    return 0;
}