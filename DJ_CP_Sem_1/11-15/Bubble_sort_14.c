#include <stdio.h>
#include <conio.h>

int main()
{
    int n, a[10], temp;
    printf("Enter the length of string: ");
    scanf("%d", &n);
    printf("Enter a string to be sorted: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("The sorted string is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    getch();
}
