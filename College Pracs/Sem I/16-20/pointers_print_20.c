#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[10], *p;
    p = &arr;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
    getch();
}