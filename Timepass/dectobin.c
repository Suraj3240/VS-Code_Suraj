#include <stdio.h>
#include <conio.h>
void main()
{

    int dec, i, j, rem;
    int arr[10];
    printf("Enter the decimal number: ");
    scanf("%d", &dec);
    for (i = 0; dec > 0; i++)
    {
        rem = dec % 2;
        dec = dec / 2;
        arr[i] = rem;
    }

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    getch();
    // return 0;
}