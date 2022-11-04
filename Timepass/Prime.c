#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    int counter = 0;
    printf("Enter a number to check: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            counter++;
        }
    }
    if (counter > 0)
    {
        printf("It is not a prime number.\n");
    }
    else
    {
        printf("It is a prime number.\n");
    }

    getch();
}