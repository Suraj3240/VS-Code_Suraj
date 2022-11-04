#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    int t1 = 0, t2 = 1, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = t1 + t2;
        printf("%d ", t1);
        t1 = t2;
        t2 = sum;
    }

    getch();
}