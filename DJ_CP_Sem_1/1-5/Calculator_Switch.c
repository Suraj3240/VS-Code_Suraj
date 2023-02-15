#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    char z;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("Which operation you want to be performed:\n+\n-\n*\n/\n");
    scanf(" %c", &z);
    printf("\n");

    switch (z)
    {
    case '+':
        printf("%d+%d=%d", a, b, (a + b));
        break;
    case '-':
        printf("%d-%d=%d", a, b, (a - b));
        break;
    case '*':
        printf("%d*%d=%d", a, b, (a * b));
        break;
    case '/':
        printf("%d/%d=%d", a, b, (a / b));
        break;

    default:
        printf("Error!");
        break;
    }

    getch();
}