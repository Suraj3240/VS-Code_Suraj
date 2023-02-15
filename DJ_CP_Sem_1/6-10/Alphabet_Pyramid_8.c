#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j;
    printf("Enter the number of rows:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 64 + j);
        }
        for (int j = i; j > 1; j--)
        {
            printf("%c", 63 + j);
        }

        printf("\n");
    }

    getch();
}
