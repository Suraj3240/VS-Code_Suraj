#include <stdio.h>
#include <conio.h>

void main()
{
    int n, fact = 1;
    float sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + ((i * 1.0) / fact);
    }

    printf("The sum of the series is: %f", sum);

    getch();
}