#include <stdio.h>
#include <conio.h>

int fact(int a)
{
    if (a >= 1)
        return a * fact(a - 1);
    else
        return 1;
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