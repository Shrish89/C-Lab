#include <stdio.h>

int gcd(int a, int b)
{
    int rem;

    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }

    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b, c;
    int g, l;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    g = gcd(gcd(a, b), c);
    l = lcm(lcm(a, b), c);

    printf("GCD = %d\n", g);
    printf("LCM = %d\n", l);

    return 0;
}