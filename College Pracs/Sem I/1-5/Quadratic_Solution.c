#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float a, b, c;
    float root1, root2, D, RP, IP;
    printf("Enter coefficient of x^2:");
    scanf("%f", &a);
    printf("Enter coefficient of x:");
    scanf("%f", &b);
    printf("Enter constant value:");
    scanf("%f", &c);
    D = (b * b) - (4 * a * c);

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("The roots are %.2f and %.2f", root1, root2);
    }
    else if (D == 0)
    {
        root1 = (-b) / (2 * a);
        printf("Both the roots are equal: %.2f", root1);
    }
    else
    {
        RP = (-b) / (2 * a);
        IP = sqrt(-D) / (2 * a);
        printf("Root1=%.2f+%.2f i and Root2=%.2f-%.2f i", RP, IP, RP, IP);
    }

    getch();
}