#include <stdio.h>
#include <conio.h>

void check(int a)
{
    if (a % 2 == 0)
        printf("It is even.\n");
    else
        printf("It is odd.\n");
}

void even_print(int a)
{
    printf("\nEven: ");
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
}
void odd_print(int a)
{
    printf("\nOdd: ");
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }
}

void main()
{
    int num;
    printf("Enter a number to check: ");
    scanf("%d", &num);
    check(num);
    even_print(num);
    odd_print(num);
    getch();
}