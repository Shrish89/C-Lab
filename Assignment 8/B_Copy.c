#include <stdio.h>
#include <string.h>

int main()
{
    char first[50], last[50], full[100];

    printf("Enter first name: ");
    gets(first);

    printf("Enter last name: ");
    gets(last);

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("Complete name: %s", full);

    return 0;
}