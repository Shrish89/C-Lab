#include <stdio.h>

int main()
{
    int a;

    a = 5;
    printf("Initial value of a = %d\n", a);

    printf("\nUsing ++a (Pre-increment):\n");
    printf("Value = %d\n", ++a);

    printf("\nUsing a++ (Post-increment):\n");
    printf("Value = %d\n", a++);
    printf("Value after a++ = %d\n", a);

    printf("\nUsing --a (Pre-decrement):\n");
    printf("Value = %d\n", --a);

    printf("\nUsing a-- (Post-decrement):\n");
    printf("Value = %d\n", a--);
    printf("Value after a-- = %d\n", a);

    return 0;
}