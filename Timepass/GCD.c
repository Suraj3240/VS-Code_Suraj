#include <stdio.h>

int gcd(int a, int b)
{
    if (a == b)
        return a;
    else if (a > b)
        gcd(a - b, b);
    else
        gcd(a, b - a);
}

int gcd_1(int a, int b)
{
    int rem;
    while (b > 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    printf("GCD is %d\n", a);
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    gcd_1(m, n);
    printf("Using function, GCD is: %d\n", gcd(m, n));

    return 0;
}
