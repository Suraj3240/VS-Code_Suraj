#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
}