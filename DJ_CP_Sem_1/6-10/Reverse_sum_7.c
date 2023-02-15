#include <stdio.h>
#include <conio.h>

void main()
{
    int n, last_digit, sum = 0, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        last_digit = n % 10;
        n = n / 10;
        rev = (rev * 10) + last_digit;
        sum += last_digit;
    }

    printf("The reversed number is: %d", rev);
    printf("\nThe sum is: %d", sum);

    getch();
}