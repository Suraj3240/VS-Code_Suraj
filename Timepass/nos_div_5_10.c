//********** First 10 nos divi by 5 and 10 ************

#include <stdio.h>
#include <conio.h>

void main()
{
    int count = 10, n = 1;
    while (count > 0)
    {
        if (n % 5 == 0 && n % 8 == 0)
        {
            printf("%d ", n);
            count--;
        }
        n++;
    }

    // int n;
    // float term, sum = 0;

    // printf("Enter the number of elements: ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     term = (2 * i * (1.0) - 1) / (2 * i);
    //     sum += term;
    // }
    // printf("The sum of the series is: %f", sum);

    getch();
}