#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    char arr[20];
    gets(arr);
    for (i = 0; arr[i] != '\0'; i++)
        ;
    printf("%d", i);
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    printf("\n");
    for (int j = 0; j < i; j += 2)
    {
        printf("%c ", arr[j]);
    }
    printf("\n");
    for (int j = 1; j < i; j += 2)
    {
        printf("%c ", arr[j]);
    }
    printf("\n");
    getch();
}
