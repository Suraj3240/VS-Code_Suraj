#include <stdio.h>
#include <conio.h>

void main()
{
    int n, a = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %c ", (64 + a));
            a++;
        }
        printf("\n");
    }

    getch();
}