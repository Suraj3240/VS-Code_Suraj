#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, num, maxi;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        maxi = a;
    }
    else
    {
        maxi = b;
    }
    printf("What you want to be done:\n1:display greatest\n2:Sum\n3:Product\n4:Exit\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("%d", maxi);
        break;
    case 2:
        printf("%d", a + b);
        break;
    case 3:
        printf("%d", a * b);
        break;
    case 4:
        break;
    }

    getch();
}