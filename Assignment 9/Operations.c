#include <stdio.h>

int sumDigits(int n)
{
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int countDigits(int n)
{
    int count = 0;

    if (n < 0)
        n = -n;

    if (n == 0)
        return 1;

    while (n > 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int reverseNumber(int n)
{
    int rev = 0, rem;
    int sign = 1;

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return rev * sign;
}

int main()
{
    int n, rev;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumDigits(n));
    printf("Number of digits = %d\n", countDigits(n));

    rev = reverseNumber(n);

    printf("Reverse = %d\n", rev);

    if (n == rev)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}