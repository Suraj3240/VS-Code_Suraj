#include <stdio.h>
#include <conio.h>

void matrix_add(int a[10][10], int b[10][10], int m, int n)
{
    int c[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n\nAddition of 2 given Matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

void matrix_mul(int a[10][10], int b[10][10], int m, int n, int o, int p)
{
    int c[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\n\nMultiplication of 2 given Matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    // Addition of 2 matrices
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

    int o, p;
    printf("Enter no of rows: ");
    scanf("%d", &o);
    printf("Enter no of columns: ");
    scanf("%d", &p);
    int b[10][10];
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("Enter a value (%d,%d): ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    // For addition
    if (m == o && n == p)
    {
        matrix_add(a, b, m, n);
    }
    else
    {
        printf("\n\nError!!");
    }
    // For Multiplication
    if (n == o)
    {
        matrix_mul(a, b, m, n, o, p);
    }
    else
    {
        printf("\n\nError!!");
    }

    getch();
}
