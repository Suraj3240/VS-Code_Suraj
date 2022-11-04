#include <stdio.h>
#include <conio.h>

void main()
{
    // Taking input of a matrix and printing it
    int m, n;
    printf("Enter no of rows: ");
    scanf("%d", &m);
    printf("Enter no of columns: ");
    scanf("%d", &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter a value (%d,%d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    getch();
}
