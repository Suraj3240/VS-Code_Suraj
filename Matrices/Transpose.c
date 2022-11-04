#include <stdio.h>
#include <conio.h>

void main()
{
    int m, n;
    printf("Enter no of rows: ");
    scanf("%d", &m);
    printf("Enter no of columns: ");
    scanf("%d", &n);
    int a[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter a value (%d,%d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\nThe given matrix is:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nTranspose of a given matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

    getch();
}