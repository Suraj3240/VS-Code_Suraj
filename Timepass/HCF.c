#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, mini;
    // int counter = 1;
    //  float ans = 0;
    //  float term;
    printf("Name: Suraj Shinde\nSAP Id: 60019210031\n\n");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        mini = a;
    }
    else
    {
        mini = b;
    }
    while (1)
    {
        if (a % mini == 0 && b % mini == 0)
        {
            printf("%d", mini);
            break;
        }
        mini--;
    }

    getch();
}
