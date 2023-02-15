#include <stdio.h>
#include <conio.h>

int fact(int a)
{
    int ans;
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return ans = a * fact(a - 1);
    }
}

void main()
{
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    int ans = fact(n) / (fact(n - r) * fact(r));
    printf("The ans is: %d", ans);
    getch();
}