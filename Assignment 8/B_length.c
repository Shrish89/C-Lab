#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Length of first string = %d\n", strlen(str1));
    printf("Length of second string = %d\n", strlen(str2));

    result = strcmp(str1, str2);

    if (result == 0)
        printf("Both strings are equal.");
    else if (result < 0)
        printf("First string comes first lexicographically.");
    else
        printf("Second string comes first lexicographically.");

    return 0;
}