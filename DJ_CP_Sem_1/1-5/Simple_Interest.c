#include <stdio.h>
#include <conio.h>

void main()
{
    float p, n, r;
    printf("Enter the Principal amount:");
    scanf("%f", &p);
    printf("Enter the number of years:");
    scanf("%f", &n);
    printf("Enter the rate of Interest:");
    scanf("%f", &r);

    printf("Your Interest is: %f\n", (p * n * r) / 100);
    printf("Your Total Amount with Interest is: %f", p + (p * n * r) / 100);

    getch();
}