#include <stdio.h>
#include <conio.h>

int fact(int a)
{
    int f = 1;
    for (int i = 1; i <= a; i++)
    {
        f = f * i;
    }
    return f;
}

void main()
{
    int n, r, nCr;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    nCr = fact(n) / (fact(n - r) * fact(r));
    printf("The value of %dC%d is: %d", n, r, nCr);

    getch();
}