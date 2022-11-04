#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    printf("Name: Suraj Shinde\nSAP Id: 60019210031\n\n");
    int n, last_digit, counter = 0;
    printf("Enter the no to check: ");
    scanf("%d", &n);
    int digits = (log(n) / log(10)) + 1;
    int arr[digits];
    for (int i = 0; i < digits; i++)
    {
        last_digit = n % 10;
        n /= 10;
        arr[i] = last_digit;
    }
    for (int i = 0; i < digits / 2; i++)
    {
        if (arr[i] == arr[digits - i - 1])
        {
            counter++;
        }
    }
    if (counter == digits / 2)
    {
        printf("It is a Palindrome number.");
    }
    else
    {
        printf("It is not a Palindrome Number.");
    }
    getch();
}