#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    printf("Enter 3 numbers:");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("The Greatest number is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("The Greatest number is %d", b);
    }
    else if (c > a && c > b)
    {
        printf("The Greatest number is %d", c);
    }
    else if (a == b && b == c)
    {
        printf("All the Numbers are Same.");
    }

    getch();
}