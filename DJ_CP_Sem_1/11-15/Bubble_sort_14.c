#include <stdio.h>

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
    int check = 0;
    for (int i = 0; i < n - 1; i++)
    {
        check = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                check = 0;
            }
        }
        if (check)
        {
            printf("Sorted in %d iterations.\n", i);
            break;
        }
    }
    printf("The sorted string is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
