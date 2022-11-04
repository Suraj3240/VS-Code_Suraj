#include <stdio.h>
#include <conio.h>

void main()
{
    int n, last_digit, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        last_digit = n % 10;
        n = n / 10;
        sum += last_digit * last_digit * last_digit;
    }
    if (sum == temp)
    {
        printf("It is an Armstrong Number.");
    }
    else
    {
        printf("It is not an Armstrong Number.");
    }

    getch();
}