#include <stdio.h>
#include <conio.h>

void fact(int *a)
{
    int ans = 1;
    for (int i = 1; i <= *a; i++)
    {
        ans = ans * i;
    }
    printf("The ans is: %d", ans);
}

void main()
{
    int n;
    scanf("%d", &n);
    fact(&n);
    getch();
}