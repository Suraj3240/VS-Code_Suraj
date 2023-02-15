#include <stdio.h>
#include <conio.h>

void lcm(int a, int b)
{
    int max, temp;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    temp = max;

    //*********Not getting ans for this approach**********

    // for (int i = 2; i < 100; i++)
    // {
    //     if (temp % b == 0)
    //     {
    //         printf("The ans is: %d", temp);
    //         break;
    //     }
    //     else
    //     {
    //         temp = 0;
    //         temp = max * i;
    //     }
    // }

    //*********Getting ans for this approach**********

    // while (max % a != 0 || max % b != 0)
    // {
    //     max++;
    // }
    // printf("lcm %d", max);
}

void main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    lcm(a, b);

    getch();
}