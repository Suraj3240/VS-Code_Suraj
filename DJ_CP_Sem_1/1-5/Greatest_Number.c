#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    printf("Enter 2 numbers:");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("The Greatest Number is: %d", a);
    }
    else if (a == b)
    {
        printf("Both the numbers are same.");
    }
    else
    {
        printf("The Greatest Number is: %d", b);
    }

    getch();
}