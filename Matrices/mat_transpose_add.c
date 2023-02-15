#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10], b[10][10], c[10][10];
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = a[j][i];
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    getch();
}